# Homework: обмен RRC-сообщениями LTE по SCTP

Клиент и сервер на C обмениваются сообщениями RRC (3GPP LTE) поверх SCTP:

1. клиент отправляет `RRCConnectionRequest` (s-TMSI, причина установления соединения);
2. сервер отвечает `RRCConnectionSetup`;
3. клиент отправляет `RRCConnectionSetupComplete`.

Сообщения кодируются в UPER (`uper_encode_to_buffer` / `uper_decode`) кодом, сгенерированным [asn1c](https://github.com/vlm/asn1c) из ASN.1-спецификации `rrc.asn1`, и выводятся в XER (`xer_fprint`). Порт: 8080.

Стек: C, asn1c, lksctp (Linux), gcc.

## Сборка и запуск (Linux)

Сгенерированный код (`src/`) и бинарники (`build/`) в репозиторий не входят.

```bash
sudo apt-get install asn1c libsctp-dev   # или соберите asn1c из исходников
./asn1c.sh                               # генерация C-кода из rrc.asn1 в src/
mkdir -p build
./server.sh                              # сборка и запуск сервера
./client.sh                              # в другом терминале: сборка и запуск клиента
```

Компиляция всех файлов из `src/` занимает около двух минут.

## Пример вывода

Сервер:
```text
[2024-04-26 09:15:15] SCTP-сокет создан
[2024-04-26 09:15:15] Сокет привязан к порту
[2024-04-26 09:15:15] Сервер ожидает подключения
[2024-04-26 09:15:47] Принято подключение от 127.0.0.1:59362
[2024-04-26 09:15:47] Принят RRCConnectionRequest
<RRCConnectionRequest>
    <criticalExtensions>
        <rrcConnectionRequest-r8>
            <ue-Identity>
                <s-TMSI>
                    <mmec>
                        00100000
                    </mmec>
                    <m-TMSI>
                        00000000000000000011000000111001
                    </m-TMSI>
                </s-TMSI>
            </ue-Identity>
            <establishmentCause><emergency/></establishmentCause>
            <spare>
                0
            </spare>
        </rrcConnectionRequest-r8>
    </criticalExtensions>
</RRCConnectionRequest>
[2024-04-26 09:15:47] Создание RRCConnectionSetup
[2024-04-26 09:15:47] Отправлено RRCConnectionSetup
<RRCConnectionSetupComplete>
    <rrc-TransactionIdentifier>1</rrc-TransactionIdentifier>
    <criticalExtensions>
        <c1>
            <rrcConnectionSetupComplete-r8>
                <selectedPLMN-Identity>1</selectedPLMN-Identity>
                <dedicatedInfoNAS>01 02 03</dedicatedInfoNAS>
            </rrcConnectionSetupComplete-r8>
        </c1>
    </criticalExtensions>
</RRCConnectionSetupComplete>
Принято RRCConnectionSetupComplete с PLMN-Identity: 1
[2024-04-26 09:15:47] Соединение закрыто

```

Клиент:
```text
Создаётся SCTP-сокет...
Настройка адреса сервера и порта...
Подключение к серверу SCTP...
Инициализация RRCConnectionRequest...
Заполнение значений s-TMSI...
Кодирование и отправка RRCConnectionRequest...
Принятие RRCConnectionSetup...
Получено RRCConnectionSetup с идентификатором транзакции: 1
<RRCConnectionSetup>
    <rrc-TransactionIdentifier>1</rrc-TransactionIdentifier>
    <criticalExtensions>
        <c1>
            <rrcConnectionSetup-r8>
                <radioResourceConfigDedicated>
                </radioResourceConfigDedicated>
            </rrcConnectionSetup-r8>
        </c1>
    </criticalExtensions>
</RRCConnectionSetup>
Инициализация RRCConnectionSetupComplete...
Кодирование и отправка RRCConnectionSetupComplete...
Успешно отправлено RRCConnectionSetupComplete.
```

Обмен пакетами можно посмотреть в Wireshark, выбрав интерфейс loopback.
