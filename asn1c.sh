#!/bin/bash

# Проверка и создание директорий
if [ ! -d "src" ]; then
    mkdir src
fi

# Генерация C-кода из ASN.1
asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src rrc.asn1


# Проверка на ошибки после генерации
if [ $? -ne 0 ]; then
    echo "Ошибка при генерации кода из ASN.1"
    exit 1
fi
