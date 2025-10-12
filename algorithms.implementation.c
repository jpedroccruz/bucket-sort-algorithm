#include <stdio.h>
#include <stdlib.h>
#include "./lib/bucket_sort.h"
#include "./lib/bubble_sort.h"
#include "./lib/uploadData.h"

int main() {
  char famous_people[100][50];
  int namesToOrderQtt;
  int comparasion = 0;

  uploadData(famous_people);

  printf("Insira a quantidade de nomes para desordenar: ");
  scanf("%d", &namesToOrderQtt);
  system("cls");

  bucketSort(famous_people, namesToOrderQtt, &comparasion);
  // bubbleSort(famous_people, namesToOrderQtt, &comparasion);

  for (int i = 0; i < namesToOrderQtt; i++) {
    printf("%s\n", famous_people[i]);
  }

  printf("\nForam feitas %d comparacoes\n", comparasion);
}