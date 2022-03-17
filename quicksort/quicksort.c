#include "quicksort.h"

void intercambia(int a, int b) {
    int t = a;
    a = b;
    b = t;
}
 
int dividir (int *arr, int low, int high) {
    int pivot = arr[high];
    int i = (low - 1), tmp;
 
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        }
    }
    tmp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = tmp;
    return (i + 1);
}
 
void quicksort(int *arr, int low, int high) {
    if (low < high) {
        int p = dividir(arr, low, high);
 
        quicksort(arr, low, p - 1);
        quicksort(arr, p + 1, high);
    }
}