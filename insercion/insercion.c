#include "insercion.h"

void insercion(int *arr, int n) {
  int i, j, tmp;
  for(i = 0; i < n; i++) {
    j = i;
    tmp = arr[i];
    while(j > 0 && tmp < arr[j - 1]) {
      arr[j] = arr[j - 1];
      j--;
    }
    arr[j] = tmp;
  }
}