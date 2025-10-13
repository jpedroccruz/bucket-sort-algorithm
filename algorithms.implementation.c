#include <stdio.h>
#include <stdlib.h>
#include "./lib/bucket_sort.h"
#include "./lib/bubble_sort.h"
#include "./lib/uploadData.h"

int main() {
  char famous_people[100][50];
  int namesToOrderQtt;
  int comparasion = 0, swap = 0, option;

  uploadData(famous_people);
  
  printf("Select the sorting algorithm:");
  printf("\n[1] Bubble Sort");
  printf("\n[2] Bucket Sort");
  printf("\n> ");
  scanf("%d", &option);

  switch (option) {
    case 1:
      printf("> [BUBBLE SORT] Insira a quantidade de nomes para desordenar: ");
      scanf("%d", &namesToOrderQtt);
      bubbleSort(famous_people, namesToOrderQtt, &comparasion, &swap);
      system("cls");
      printf("BUBBLE SORT - ");
      break;
    
      case 2:
      printf("> [BUCKET SORT] Insira a quantidade de nomes para desordenar: ");
      scanf("%d", &namesToOrderQtt);
      bucketSort(famous_people, namesToOrderQtt, &comparasion, &swap);
      system("cls");
      printf("BUCKET SORT - ");
      break;
    
      default:
      break;
  }

  printf("Ordenando array de Z para A:\n\n");

  for (int i = 0; i < namesToOrderQtt; i++) {
    printf("%s\n", famous_people[i]);
  }

  printf("\n| Para %d nomes:", namesToOrderQtt);
  printf("\n> Foram feitas %d comparacoes", comparasion);
  printf("\n> Foram feitas %d trocas", swap);
}
  