#!/bin/bash
gcc main.c tiempo/tiempo.c imprime_numeros.c leer_numeros/leer_numeros.c burbuja/burbuja.c -o main
./main 10 < numeros10millones.txt > datos_tiempos/burbuja.txt 
./main 100 < numeros10millones.txt >> datos_tiempos/burbuja.txt
./main 1000 < numeros10millones.txt >> datos_tiempos/burbuja.txt 
./main 10000 < numeros10millones.txt >> datos_tiempos/burbuja.txt 
./main 100000 < numeros10millones.txt >> datos_tiempos/burbuja.txt 
./main 1000000 < numeros10millones.txt >> datos_tiempos/burbuja.txt 