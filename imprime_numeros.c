#include <stdio.h>

void imprime_numeros(int *arr, int len) {
  int i;
  for(i = 0; i < len; i++)
    printf("%d ", arr[i]);
  printf("\n");
}