#include<stdio.h>
#include<stdlib.h>

int insertionSort(int *vet, int n){
	int i, j, indexFor, aux;
	for(i = 1; i < n; i++){
		indexFor = i;
		while((vet[indexFor] < vet[indexFor - 1]) && (indexFor != 0)){
			aux = vet[indexFor];
			vet[indexFor] = vet[indexFor - 1];
			vet[indexFor - 1] = aux;
			indexFor --;
		}
	}
}
