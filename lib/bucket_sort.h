#ifndef BUCKET_SORT_H
#define BUCKET_SORT_H

#include <stdio.h>
#include <string.h>
#include "./bubble_sort.h"

const int BUCKETS_QTT = 26;

void bucketSort(char array[][50], int arrayLength, int *comparasion, int *swap) {
  char bucket_array[BUCKETS_QTT][arrayLength][50];
  int bucket_count[BUCKETS_QTT];

  for (int i = 0; i < BUCKETS_QTT; i++) {
    bucket_count[i] = 0;
  }

  // STEP 1: inserting elements into buckets
  int index, nextIndex;
  for (int i = 0; i < arrayLength; i++) {
    index = ((int)array[i][0] - 'A');
    
    if (index > arrayLength) index = arrayLength - 1;

    nextIndex = bucket_count[index]++;
    strcpy(bucket_array[index][nextIndex], array[i]);
  } 

  // STEP 2: sorting each bucket
  for (int i = 0; i < BUCKETS_QTT; i++) {
    if (bucket_count[i] > 1) bubbleSort(bucket_array[i], bucket_count[i], comparasion, swap);
  }

  // STEP 3: gathering elements from each bucket
  nextIndex = 0;
  for (int i = 0; i < BUCKETS_QTT; i++) {
    for (int j = 0; j < bucket_count[i]; j++) {
      (*swap)++;
      strcpy(array[nextIndex++], bucket_array[i][j]);
    }
  }
}

#endif