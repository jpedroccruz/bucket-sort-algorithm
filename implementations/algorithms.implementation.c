#include <stdio.h>
#include <stdlib.h>
#include "bucket_sort.h"
#include "bubble_sort.h"

int main() {
  FILE *dataset = fopen("../data.txt", "r");
  char famous_people[100][50];
  int namesToOrderQtt;

  for (int i = 0; i < 100; i++) {
    fscanf(dataset, "%[^\n]\n", famous_people[i]);
  }

  printf("Insira a quantidade de nomes para ordenar: ");
  scanf("%d", &namesToOrderQtt);

  system("cls");
  bucketSort(famous_people, namesToOrderQtt);

  for (int i = 0; i < namesToOrderQtt; i++) {
    printf("%s\n", famous_people[i]);
  }
}