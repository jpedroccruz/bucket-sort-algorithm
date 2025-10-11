#ifndef BUCKET_SORT_H
#define BUCKET_SORT_H

#include <stdio.h>

void sort(float *array, int bucketLength) {
  float aux;

  for (int i = 0; i < bucketLength - 1; i++) {
    for (int j = i + 1; j < bucketLength; j++) {
      if (array[i] > array[j]) {
        aux = array[i];
        array[i] = array[j];
        array[j] = aux;
      }
    }
  }
}

void bucketSort() {
  float array[] = {0.78, 0.17, 0.39, 0.26, 0.72, 0.94, 0.21, 0.12, 0.23, 0.68};
  int arrayLength = 10;
  float bucket_array[arrayLength][arrayLength];
  int bucket_count[10] = {0};

  // STEP 1: inserting elements into buckets
  int index, nextIndex;
  for (int i = 0; i < arrayLength; i++) {
    index = array[i] * arrayLength;
    if (index > arrayLength) index = arrayLength - 1;
    
    nextIndex = bucket_count[index]++;
    bucket_array[index][nextIndex] = array[i];
  } 

  // sorting each bucket
  for (int i = 0; i < arrayLength; i++) {
    if (bucket_count[i] > 1) sort(bucket_array[i], bucket_count[i]);
  }

  // gathering elements from each bucket
  nextIndex = 0;
  for (int i = 0; i < arrayLength; i++) {
    for (int j = 0; j < bucket_count[i]; j++) {
      array[nextIndex++] = bucket_array[i][j];
    }
  }

  for (int i = 0; i < arrayLength; i++) {
    printf("%.1f  ", array[i]);
  }
}


#endif