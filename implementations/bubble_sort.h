#ifndef BUBBLE_SORT
#define BUBBLE_SORT

#include <stdio.h>
#include <string.h>

void bubbleSort(char array[][50], int arrayLength) {
  char aux[50];

  for (int i = 0; i < arrayLength - 1; i++) {
    for (int j = i + 1; j < arrayLength; j++) {
      if (strcmp(array[i], array[j]) < 0) {
        strcpy(aux, array[i]);
        strcpy(array[i], array[j]);
        strcpy(array[j], aux);
      }
    }
  }
}

#endif