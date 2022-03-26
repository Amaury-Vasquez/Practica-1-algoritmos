#!/bin/bash
gcc main.c tiempo/tiempo.c leer_numeros/leer_numeros.c abb/abb.c -o main
./main 500000 < numeros.txt >> datos_tiempos/comparativa.txt
