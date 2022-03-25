#include "heap.h"

void swap(int *arr, int a, int b) {
  int tmp = arr[a];
  arr[a] = arr[b];
  arr[b] = tmp;
}

void heapify(int *arr, int n, int i) {
  int max = i; //Initialize max as root
  int leftChild = 2 * i + 1;
  int rightChild = 2 * i + 2;

  //If left child is greater than root
  if (leftChild < n && arr[leftChild] > arr[max])
    max = leftChild;

  //If right child is greater than max
  if (rightChild < n && arr[rightChild] > arr[max])
    max = rightChild;

  //If max is not root
  if (max != i) {
    swap(arr, i, max);
    //heapify the affected sub-tree recursively
    heapify(arr, n, max);
  }
}

//Main function to perform heap sort
void heap_sort(int *arr, int n) {
  //Rearrange array (building heap)
  int i;
  for (i = n / 2; i >= 0; i--)
    heapify(arr, n, i);

  //Extract elements from heap one by one
  for (int i = n; i >= 0; i--) {
    swap(arr, 0, i); //Current root moved to the end

    heapify(arr, i, 0); //calling max heapify on the heap reduced
  }
}