#!/bin/bash


#rm -rf src
#mkdir src

# Компиляция ASN.1
#asn1c -fcompound-names -no-gen-example -gen-PER -pdu=RRCConnectionSetup -D src rrc.asn1

# Компиляция сервера
gcc -o build/server src/*.c server.c -Isrc -lsctp -w -DPDU="RRCConnectionSetup"

# Запуск сервера
./build/server
