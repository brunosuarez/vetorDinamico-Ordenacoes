#include<stdio.h>
#include<stdlib.h>

int sellectionSort(int *vet, int n){
	int i, j, PosMenor, aux;
	for(i = 0; i <n-1; i++){
		PosMenor = i;
		for (j=i+1; j < n; j++){
			if(vet[j] < vet[i]){
				PosMenor = j;
			}
		}
		if (PosMenor != i) {	
			aux = vet[i];
    		vet[i] = vet[PosMenor];
    		vet[PosMenor] = aux;

    	}
	}
	for(i = 0; i < n; i++){
		printf("Valor ordenado: %d\n", vet[i]);
	}
}
