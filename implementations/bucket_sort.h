#ifndef BUCKET_SORT_H
#define BUCKET_SORT_H

#include <stdio.h>
#include <string.h>

void sort(char array[][50], int arrayLength) {
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

void bucketSort(char array[][50], int arrayLength) {
  char bucket_array[arrayLength][arrayLength][50];
  int bucket_count[arrayLength];

  for (int i = 0; i < arrayLength; i++) {
    bucket_count[i] = 0;
  }

  // STEP 1: inserting elements into buckets
  int index, nextIndex;
  for (int i = 0; i < arrayLength; i++) {
    index = (int)array[i] * arrayLength;

    while (index >= 10) {
      index /= 10;
    }

    if (index > arrayLength) index = arrayLength - 1;
    
    nextIndex = bucket_count[index]++;
    strcpy(bucket_array[index][nextIndex], array[i]);
  } 

  // sorting each bucket
  for (int i = 0; i < arrayLength; i++) {
    if (bucket_count[i] > 1) sort(bucket_array[i], bucket_count[i]);
  }

  // gathering elements from each bucket
  nextIndex = 0;
  for (int i = 0; i < arrayLength; i++) {
    for (int j = 0; j < bucket_count[i]; j++) {
      strcpy(array[nextIndex++], bucket_array[i][j]);
    }
  }
}


#endif