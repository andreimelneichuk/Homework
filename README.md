Предупреждение! В папке srs собрано только 1000 файлов и 4815 поэтому скорее всего работать как должно не будет, этому придётся установить asn1c, скомпилировать asn1 структуру и скомпилировать оба кода в помощью gcc, все команды можно найти в bash файлах.

Если хотите перекомпилировать, а потом запустить запустить скрипты server.sh и client.sh, гланое подождать около двух минут, пока они соберут все c файлы из папки srs

Если хотите перекомпилировать asn структуру, то у вас должен быть установлен компилятор asn1c, важно что на линуксе он должен быть установлен в ту же папку, где вы и хотите скомпилировать asn1 структуру. И после этого можете запустить asn1c.sh

Если всё правильно запущено программы выдают такой результат:
server:
[2024-04-26 09:15:15] SCTP-сокет создан
[2024-04-26 09:15:15] Сокет привязан к порту
[2024-04-26 09:15:15] Сервер ожидает подключения
[2024-04-26 09:15:47] Принято подключениe от 127.0.0.1:59362
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
Принятно RRCConnectionSetupComplete с PLMN-Identity: 1
[2024-04-26 09:15:47] Соединение закрыто


client:
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
Иницализация RRCConnectionSetupComplete...
Кодирование и отправка RRCConnectionSetupComplete...
Успешно отправлено RRCConnectionSetupComplete.


Так же отправку пакетов можно посмотреть с помощью wireshark, выбрав пункт loopback в главном меню
