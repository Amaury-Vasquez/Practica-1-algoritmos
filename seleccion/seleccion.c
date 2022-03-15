#include "seleccion.h"

void seleccion(int *arr, int n) {
  int i, k, p, tmp;
  for(k = 0; k < n - 1; k++) {
    p = k;
    for(i = k + 1; i < n; i++) {
      if(arr[i] < arr[p])
        p = i;
    }
    tmp = arr[p];
    arr[p] = arr[k];
    arr[k] = tmp;
  }
}