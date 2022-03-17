#!/bin/bash
gcc main.c tiempo/tiempo.c leer_numeros/leer_numeros.c quicksort/quicksort.c -o main
./main 10 < numeros.txt > datos_tiempos/quicksort.txt 
./main 100 < numeros.txt >> datos_tiempos/quicksort.txt
./main 1000 < numeros.txt >> datos_tiempos/quicksort.txt 
./main 10000 < numeros.txt >> datos_tiempos/quicksort.txt 
./main 100000 < numeros.txt >> datos_tiempos/quicksort.txt 
./main 1000000 < numeros.txt >> datos_tiempos/quicksort.txt 
./main 10000000 < numeros.txt >> datos_tiempos/quicksort.txt 

