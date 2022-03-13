#!/bin/bash
gcc main.c tiempo/tiempo.c imprime_numeros.c leer_numeros/leer_numeros.c burbuja/burbuja.c -o main
./main 10 < numeros.txt > datos_tiempos/burbuja.txt 
./main 100 < numeros.txt >> datos_tiempos/burbuja.txt
./main 1000 < numeros.txt >> datos_tiempos/burbuja.txt 
./main 10000 < numeros.txt >> datos_tiempos/burbuja.txt 
./main 100000 < numeros.txt >> datos_tiempos/burbuja.txt 
./main 1000000 < numeros.txt >> datos_tiempos/burbuja.txt 