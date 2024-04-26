#!/bin/bash



# Компиляция клиента
gcc -o build/client src/*.c client.c -Isrc -lsctp -w

# Запуск клиента
./build/client
