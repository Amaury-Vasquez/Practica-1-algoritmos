#!/bin/bash
gcc main.c tiempo/tiempo.c leer_numeros/leer_numeros.c heap/heap.c -o main
./main 100 < numeros.txt >> datos_tiempos/heap.txt 
./main 1000 < numeros.txt >> datos_tiempos/heap.txt
./main 5000 < numeros.txt >> datos_tiempos/heap.txt 
./main 10000 < numeros.txt >> datos_tiempos/heap.txt 
./main 50000 < numeros.txt >> datos_tiempos/heap.txt 
./main 100000 < numeros.txt >> datos_tiempos/heap.txt 
./main 200000 < numeros.txt >> datos_tiempos/heap.txt 
./main 400000 < numeros.txt >> datos_tiempos/heap.txt 
./main 600000 < numeros.txt >> datos_tiempos/heap.txt
./main 800000 < numeros.txt >> datos_tiempos/heap.txt 
./main 1000000 < numeros.txt >> datos_tiempos/heap.txt 
./main 2000000 < numeros.txt >> datos_tiempos/heap.txt 
./main 3000000 < numeros.txt >> datos_tiempos/heap.txt 
./main 4000000 < numeros.txt >> datos_tiempos/heap.txt 
./main 5000000 < numeros.txt >> datos_tiempos/heap.txt 
./main 6000000 < numeros.txt >> datos_tiempos/heap.txt
./main 7000000 < numeros.txt >> datos_tiempos/heap.txt 
./main 8000000 < numeros.txt >> datos_tiempos/heap.txt 
./main 9000000 < numeros.txt >> datos_tiempos/heap.txt 
./main 10000000 < numeros.txt >> datos_tiempos/heap.txt 

