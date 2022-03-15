#include <stdio.h>
#include <stdlib.h>

#include "imprime_numeros.h"
#include "shellsort/shellsort.h"

int main(int argc, char *argv[]) {
  int i, valor, n = atoi(argv[1]);
  int *arr =  (int *) malloc(sizeof(int) * n);
  for(i = 0; i < n; i++) {
    scanf("%d", &valor);
    arr[i] = valor;
  }
  imprime_numeros(arr, n);
  shellsort(arr, n);
  imprime_numeros(arr, n);
  free(arr);
  return 0;
}