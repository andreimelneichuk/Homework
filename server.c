#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netinet/sctp.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <time.h>
#include <errno.h>

#include <RRCConnectionRequest.h>
#include <RRCConnectionSetup.h>
#include <RRCConnectionSetupComplete.h>
#include <per_encoder.h>
#include <per_decoder.h>
#include <ctype.h>

#define PORT 8080
#define MAX_STREAMS 10

void log_message(const char *message) {
    time_t now = time(NULL);
    struct tm *t = localtime(&now);

    printf("[%04d-%02d-%02d %02d:%02d:%02d] %s\n",
           t->tm_year + 1900,
           t->tm_mon + 1,
           t->tm_mday,
           t->tm_hour,
           t->tm_min,
           t->tm_sec,
           message);
}

void handle_client(int client_socket) {
    char buffer[1024];
    ssize_t len = sctp_recvmsg(client_socket, buffer, sizeof(buffer), NULL, NULL, NULL, NULL);
    if (len <= 0) {
        perror("Ошибка при получении данных");
        return;
    }

    RRCConnectionRequest_t *req = NULL;
    asn_dec_rval_t dec_ret = uper_decode(NULL, &asn_DEF_RRCConnectionRequest, (void **)&req, buffer, len, 0, 0);

    if (dec_ret.code != RC_OK) {
        log_message("Ошибка декодирования RRCConnectionRequest");
        return;
    }

    log_message("Принят RRCConnectionRequest");
    xer_fprint(stdout, &asn_DEF_RRCConnectionRequest, req);

     // Обработка входных данных
    // Преобразуем все входные данные в верхний регистр (пример простого преобразования)
    for (ssize_t i = 0; i < len; ++i) {
        buffer[i] = toupper(buffer[i]);
    }

    log_message("Создание RRCConnectionSetup");

    RRCConnectionSetup_t setup;
    memset(&setup, 0, sizeof(RRCConnectionSetup_t));
    setup.rrc_TransactionIdentifier = 1;
    setup.criticalExtensions.present = RRCConnectionSetup__criticalExtensions_PR_c1;
    setup.criticalExtensions.choice.c1.present = RRCConnectionSetup__criticalExtensions__c1_PR_rrcConnectionSetup_r8;

    asn_enc_rval_t enc_ret = uper_encode_to_buffer(
        &asn_DEF_RRCConnectionSetup,
        NULL,
        &setup,
        buffer,
        sizeof(buffer)
    );

    if (enc_ret.encoded == -1) {
        log_message("Ошибка кодирования RRCConnectionSetup");
        ASN_STRUCT_FREE(asn_DEF_RRCConnectionRequest, req);
        return;
    }

    if (sctp_sendmsg(client_socket, buffer, enc_ret.encoded, NULL, 0, 0, 0, 0, 0, 0) == -1) {
        perror("Ошибка отправки RRCConnectionSetup");
        ASN_STRUCT_FREE(asn_DEF_RRCConnectionRequest, req);
        return;
    }

    log_message("Отправлено RRCConnectionSetup");

    // Прием и декодирование RRCConnectionSetupComplete
    len = sctp_recvmsg(client_socket, buffer, sizeof(buffer), NULL, NULL, NULL, NULL);
    if (len <= 0) {
        perror("Ошибка при приеме RRCConnectionSetupComplete");
        ASN_STRUCT_FREE(asn_DEF_RRCConnectionRequest, req);
        return;
    }

    RRCConnectionSetupComplete_t *setup_complete = NULL;
    dec_ret = uper_decode(NULL, &asn_DEF_RRCConnectionSetupComplete, (void **)&setup_complete, buffer, len, 0, 0);

    if (dec_ret.code != RC_OK) {
        log_message("Ошибка декодирования RRCConnectionSetupComplete");
        ASN_STRUCT_FREE(asn_DEF_RRCConnectionRequest, req);
        return;
    }

    xer_fprint(stdout, &asn_DEF_RRCConnectionSetupComplete, setup_complete);

    printf("Принятно RRCConnectionSetupComplete с PLMN-Identity: %ld\n",
           setup_complete->criticalExtensions.choice.c1.choice.rrcConnectionSetupComplete_r8.selectedPLMN_Identity);

    ASN_STRUCT_FREE(asn_DEF_RRCConnectionRequest, req);
    ASN_STRUCT_FREE(asn_DEF_RRCConnectionSetupComplete, setup_complete);
}

int main() {
    int server_fd;
    struct sockaddr_in address;
    struct sctp_initmsg initmsg;
    struct sockaddr_in client_addr;
    socklen_t client_len = sizeof(client_addr);

    // Создание SCTP-сокета
    server_fd = socket(AF_INET, SOCK_STREAM, IPPROTO_SCTP);
    if (server_fd < 0) {
        perror("Ошибка создания сокета");
        exit(EXIT_FAILURE);
    }

    log_message("SCTP-сокет создан");

    // Инициализация SCTP-опций
    memset(&initmsg, 0, sizeof(initmsg));
    initmsg.sinit_num_ostreams = MAX_STREAMS;
    initmsg.sinit_max_instreams = MAX_STREAMS;

    if (setsockopt(server_fd, IPPROTO_SCTP, SCTP_INITMSG, &initmsg, sizeof(initmsg)) < 0) {
        perror("Ошибка установки SCTP_INITMSG");
        close(server_fd);
        exit(EXIT_FAILURE);
    }

    // Привязка к порту
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(PORT);

    if (bind(server_fd, (struct sockaddr *)&address, sizeof(address)) < 0) {
        perror("Не удалось выполнить привязку");
        close(server_fd);
        exit(EXIT_FAILURE);
    }

    log_message("Сокет привязан к порту");

    //Ожидание входящих соединений
    if (listen(server_fd, 3) < 0) {
        perror("Прослушать не удалось");
        close(server_fd);
        exit(EXIT_FAILURE);
    }

    log_message("Сервер ожидает подключения");

    // Цикл ожидания клиентов
    while (1) {
        int client_socket = accept(server_fd, (struct sockaddr *)&client_addr, &client_len);
        if (client_socket < 0) {
            perror("Ошибка при принятии соединения");
            continue;
        }

        char client_ip[INET_ADDRSTRLEN];
        inet_ntop(AF_INET, &client_addr.sin_addr, client_ip, sizeof(client_ip));

        char log_buffer[128];
        snprintf(log_buffer, sizeof(log_buffer), "Принято подключениe от %s:%d", client_ip, ntohs(client_addr.sin_port));
        log_message(log_buffer);

        handle_client(client_socket);

        close(client_socket);
        log_message("Соединение закрыто");
    }

    close(server_fd); // Закрываем серверный сокет при завершении
    log_message("Сервер закрыт");
    return 0;
}