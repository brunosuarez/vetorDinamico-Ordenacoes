#include<stdio.h>
#include<stdlib.h>

int shellSort(int *vet,int n){
  
  int i = (n - 1) / 2;
  int index, k, aux;
  while (i != 0){
    do
    	{
      		index = 1;
      		for (k = 0; k < n - i; ++k) {
        		if (vet[k] > vet[k + i]) {
          			aux = vet[k];
          			vet[k] = vet[k + i];
          			vet[k + i] = aux;
          			index = 0;
        		}
      		}
    	}while (index == 0);
    i = i / 2;
  }
  for(i = 0; i < n; i++){
		printf("Vetor Ordenado: %d\n", vet[i]);
	}
}
