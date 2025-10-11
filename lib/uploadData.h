#ifndef UPLOADDATA_H
#define UPLOADDATA_H

#include <stdio.h>

void uploadData(char famous_people[][50]) {
  FILE *dataset = fopen("data.txt", "r");

  if (!dataset) {
    perror("Not able to open data.txt");
    return;
  }

  for (int i = 0; i < 100; i++) {
    fscanf(dataset, "%[^\n]\n", famous_people[i]);
  }

  fclose(dataset);
}

#endif