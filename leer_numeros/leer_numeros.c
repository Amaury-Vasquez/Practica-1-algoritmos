#include <stdio.h>
#include <stdlib.h>

#include "leer_numeros.h"

int *genera_arreglo(int n) {
  int *arr = (int *) malloc(sizeof(int) * n);
  return arr;
}

void lee_numeros(int *arr, int n) {
  int i, valor;
  for(i = 0; i < n; i++) {
    scanf("%d", &valor);
    arr[i] = valor;
  }
}

void libera_arreglo(int *arr) {
  free(arr);
}
