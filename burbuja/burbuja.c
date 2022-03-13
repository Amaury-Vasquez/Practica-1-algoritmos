#include "burbuja.h"

void burbuja(int *arr, int len) {
  int aux, i, j;
  for(i = 0; i < len - 1; i++) {
    for(j = 0; j < len - 1; j++) {
      if(arr[j] > arr[j + 1]) {
        aux = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = aux;
      }
    }
  }
}

void burbuja_optimizada1(int *arr, int len) {
  int aux, i, j;
  for(i = 0; i < len - 1; i++) {
    for(j = 0; j < len - i - 1; j++) {
      if(arr[j] > arr[j + 1]) {
        aux = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = aux;
      }
    }
  }
}

void burbuja_optimizada2(int *arr, int len) {
  int aux, cambios, i, j;
  for(i = 0, cambios = 1; i < len - 1 && cambios != 0; i++) {
    cambios = 0;
    for(j = 0; j < len - i - 1; j++) {
      if(arr[j] > arr[j + 1]) {
        aux = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = aux;
        cambios = 1;
      }
    }
  }
}