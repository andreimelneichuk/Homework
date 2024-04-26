#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netinet/sctp.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <errno.h>
#include <RRCConnectionRequest.h>
#include <RRCConnectionSetup.h>
#include <RRCConnectionSetupComplete.h>
#include <per_encoder.h>
#include <per_decoder.h>

#define SERVER_IP "127.0.0.1"
#define PORT 8080

int main() {
    int sock = 0;
    struct sockaddr_in serv_addr;
    char buffer[1024];

    printf("Создаётся SCTP-сокет...\n");
    if ((sock = socket(AF_INET, SOCK_STREAM, IPPROTO_SCTP)) < 0) {
        perror("Ошибка создания SCTP-сокета");
        return -1;
    }

    // Инициализация SCTP
    struct sctp_initmsg initmsg;
    memset(&initmsg, 0, sizeof(initmsg));
    initmsg.sinit_num_ostreams = 10; // Количество выходных потоков
    initmsg.sinit_max_instreams = 10; // Количество входных потоков

    if (setsockopt(sock, IPPROTO_SCTP, SCTP_INITMSG, &initmsg, sizeof(initmsg)) < 0) {
        perror("Ошибка установки SCTP_INITMSG");
        close(sock);
        return -1;
    }

    printf("Настройка адреса сервера и порта...\n");
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(PORT);

    if (inet_pton(AF_INET, SERVER_IP, &serv_addr.sin_addr) <= 0) {
        perror("Неверный адрес или порт");
        close(sock);
        return -1;
    }

    printf("Подключение к серверу SCTP...\n");
    if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0) {
        perror("Не удалось установить соединение");
        close(sock);
        return -1;
    }

    printf("Инициализация RRCConnectionRequest...\n");
    RRCConnectionRequest_t req;
    memset(&req, 0, sizeof(RRCConnectionRequest_t));
    req.criticalExtensions.present = RRCConnectionRequest__criticalExtensions_PR_rrcConnectionRequest_r8;

    printf("Заполнение значений s-TMSI...\n");
    req.criticalExtensions.choice.rrcConnectionRequest_r8.ue_Identity.present = InitialUE_Identity_PR_s_TMSI;

    // Установка значения MMEC
    uint8_t mmec_value[] = {32}; // Пример значения
    req.criticalExtensions.choice.rrcConnectionRequest_r8.ue_Identity.choice.s_TMSI.mmec.buf = mmec_value;
    req.criticalExtensions.choice.rrcConnectionRequest_r8.ue_Identity.choice.s_TMSI.mmec.size = sizeof(mmec_value);

    // Установка значения m-TMSI
    uint8_t m_tmsi_value[] = {0, 0, 48, 57}; // 12345 (big-endian)
    req.criticalExtensions.choice.rrcConnectionRequest_r8.ue_Identity.choice.s_TMSI.m_TMSI.buf = m_tmsi_value;
    req.criticalExtensions.choice.rrcConnectionRequest_r8.ue_Identity.choice.s_TMSI.m_TMSI.size = sizeof(m_tmsi_value);

    printf("Кодирование и отправка RRCConnectionRequest...\n");
    asn_enc_rval_t enc_ret = uper_encode_to_buffer(&asn_DEF_RRCConnectionRequest, NULL, &req, buffer, sizeof(buffer));
    if (enc_ret.encoded == -1) {
        fprintf(stderr, "Ошибка кодирования RRCConnectionRequest\n");
        close(sock);
        return -1;
    }

    if (sctp_sendmsg(sock, buffer, enc_ret.encoded, NULL, 0, 0, 0, 0, 0, 0) == -1) {
        perror("Ошибка отправки RRCConnectionRequest");
        close(sock);
        return -1;
    }

    printf("Принятие RRCConnectionSetup...\n");
    ssize_t len = sctp_recvmsg(sock, buffer, sizeof(buffer), NULL, NULL, NULL, NULL);
    if (len <= 0) {
        perror("Ошибка при получении RRCConnectionSetup");
        close(sock);
        return -1;
    }

    RRCConnectionSetup_t *setup = NULL;
    asn_dec_rval_t dec_ret = uper_decode(NULL, &asn_DEF_RRCConnectionSetup, (void **)&setup, buffer, len, 0, 0);

    if (dec_ret.code != RC_OK) {
        fprintf(stderr, "Ошибка декодирования RRCConnectionSetup\n");
        close(sock);
        return -1;
    }

    printf("Получено RRCConnectionSetup с идентификатором транзакции: %ld\n", setup->rrc_TransactionIdentifier);

    xer_fprint(stdout, &asn_DEF_RRCConnectionSetup, setup);

    printf("Иницализация RRCConnectionSetupComplete...\n");
    RRCConnectionSetupComplete_t setup_complete;
    memset(&setup_complete, 0, sizeof(RRCConnectionSetupComplete_t));
    setup_complete.rrc_TransactionIdentifier = setup->rrc_TransactionIdentifier;

    // Установка criticalExtensions
    setup_complete.criticalExtensions.present = RRCConnectionSetupComplete__criticalExtensions_PR_c1;
    setup_complete.criticalExtensions.choice.c1.present = RRCConnectionSetupComplete__criticalExtensions__c1_PR_rrcConnectionSetupComplete_r8;

    // Установка selectedPLMN-Identity
    setup_complete.criticalExtensions.choice.c1.choice.rrcConnectionSetupComplete_r8.selectedPLMN_Identity = 1;

    // Установка dedicatedInfoNAS
    uint8_t nas_info[] = {0x01, 0x02, 0x03};
    setup_complete.criticalExtensions.choice.c1.choice.rrcConnectionSetupComplete_r8.dedicatedInfoNAS.buf = nas_info;
    setup_complete.criticalExtensions.choice.c1.choice.rrcConnectionSetupComplete_r8.dedicatedInfoNAS.size = sizeof(nas_info);

    printf("Кодирование и отправка RRCConnectionSetupComplete...\n");
    enc_ret = uper_encode_to_buffer(&asn_DEF_RRCConnectionSetupComplete, NULL, &setup_complete, buffer, sizeof(buffer));
    if (enc_ret.encoded == -1) {
        fprintf(stderr, "Ошибка кодирования RRCConnectionSetupComplete\n");
        close(sock);
        return -1;
    }

    if (sctp_sendmsg(sock, buffer, enc_ret.encoded, NULL, 0, 0, 0, 0, 0, 0) == -1) {
        perror("Ошибка отправки RRCConnectionSetupComplete");
        close(sock);
        return -1;
    }

    printf("Успешно отправлено RRCConnectionSetupComplete.\n");

    close(sock);

    return 0;
}
