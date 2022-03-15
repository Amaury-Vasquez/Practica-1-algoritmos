#include "shellsort.h"

void shellsort(int *arr, int n) {
  int b, i, k = n / 2, tmp;
  while(k >= 1) {
    b = 1;
    while(b != 0) {
      b = 0;
      for(i = k; i < n; i++) {
        if(arr[i - k] > arr[i]) {
          tmp = arr[i];
          arr[i] = arr[i - k];
          arr[i - k] = tmp;
          b++;
        }
      }
    }
    k = k / 2;
  }
}
