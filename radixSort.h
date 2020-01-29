#include<stdio.h>
#include<stdlib.h>

int getMax(int vet[], int n){
  int max = vet[0];
  for (int i = 1; i < n; i++)
    if (vet[i] > max)
      max = vet[i];
  return max;
}

void countingSort(int vet[], int size, int place){
  int output[size + 1];
  int max = (vet[0] / place) % 10;
  for (int i = 1; i < size; i++){
    if (((vet[i] / place) % 10) > max)
      max = vet[i];
  }
  int count[max + 1];
  for (int i = 0; i < max; ++i)
    count[i] = 0;
  for (int i = 0; i < size; i++)
    count[(vet[i] / place) % 10]++;
  for (int i = 1; i < 10; i++)
    count[i] += count[i - 1];
  for (int i = size - 1; i >= 0; i--){
    output[count[(vet[i] / place) % 10] - 1] = vet[i];
    count[(vet[i] / place) % 10]--;
  }
  for (int i = 0; i < size; i++)
    vet[i] = output[i];
}
void radixSort(int vet[], int size){
  int max = getMax(vet, size);
  for (int place = 1; max / place > 0; place *= 10)
    countingSort(vet, size, place);
}
void printvet(int vet[], int size){
  for (int i = 0; i < size; ++i){
    printf("%d", vet[i]);
  }
  printf("\n");
}

