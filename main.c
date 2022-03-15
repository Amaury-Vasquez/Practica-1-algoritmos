#include <stdio.h>
#include <stdlib.h>

#include "tiempo/tiempo.h"
#include "shellsort/shellsort.h"
#include "leer_numeros/leer_numeros.h"

int main(int argc, char *argv[]) {
  // Verifica que solo se haya pasado un argumento
  if(argc != 2) {
    printf("Numero incorrecto de argumentos");
    return 1;
  }
  // Declaracion/Inicializacion de variables
  double utime0, stime0, wtime0,utime1, stime1, wtime1;
  int *arr, n = atoi(argv[1]);
  arr = generar_arreglo(n);
  // Entrada de datos en el arreglo
  leer_numeros(arr, n);

  // Inicia conteo del tiempo
  uswtime(&utime0, &stime0, &wtime0);
  // Ejecucion algoritmo
  shellsort(arr, n);
  // Termina conteo del tiempo
  uswtime(&utime1, &stime1, &wtime1);

  //Cálculo del tiempo de ejecución del programa
	printf("\t\t\t\t%d numeros\n\n", n);
	printf("real (Tiempo total)  %.10f s\n",  wtime1 - wtime0);
	printf("user (Tiempo de procesamiento en CPU) %.10f s\n",  utime1 - utime0);
	printf("sys (Tiempo en acciónes de E/S)  %.10f s\n",  stime1 - stime0);
	printf("CPU/Wall   %.10f %% \n",100.0 * (utime1 - utime0 + stime1 - stime0) / (wtime1 - wtime0));
	printf("\n");
	
	//Mostrar los tiempos en formato exponecial
	printf("real (Tiempo total)  %.10e s\n",  wtime1 - wtime0);
	printf("user (Tiempo de procesamiento en CPU) %.10e s\n",  utime1 - utime0);
	printf("sys (Tiempo en acciónes de E/S)  %.10e s\n",  stime1 - stime0);
	printf("CPU/Wall   %.10f %% \n",100.0 * (utime1 - utime0 + stime1 - stime0) / (wtime1 - wtime0));
	printf("\n\n");
  
  // Liberacion memoria
  liberar_arreglo(arr);
  return 0;
}