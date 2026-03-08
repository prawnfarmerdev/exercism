#include "binary_search.h"
#include <stdio.h>

const int *binary_search(int value, const int *arr, size_t length) {

  int currentpos = length / 2;
  while (arr[currentpos] != value) {
    if (arr[currentpos] > value) {
      currentpos = currentpos - (currentpos / 2);
      if (currentpos == 1 && value != arr[currentpos]) {
        currentpos = 0;
      }
    } else if (arr[currentpos] < value) {
      currentpos = currentpos + (currentpos / 2);

    } else {
      return &arr[currentpos];
    }

    if (currentpos >= (int)length || currentpos <= 0) {
      return NULL;
    }
    printf("%d\n", currentpos);

    if (value == arr[currentpos]) {
      return &arr[currentpos];
    }
  }
  return NULL;
}
