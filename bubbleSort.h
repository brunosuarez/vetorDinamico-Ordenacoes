#include<stdio.h>
#include<stdlib.h>
 
int bubbleSort(int *vet[], int n){
 
    int i = 0, j = 0, aux;
 
    for( i; i < n; i++){
        for(j; j < n - 1 - i; j++){
            if(vet[j] > *vet[j + 1]){
                aux = *vet[j];
                *vet[j] = *vet[j+1];
                *vet[j+1] = aux;
            }
        }
    }
    for(i = 0; i < n; i ++)
        printf("vetor[%i]=%i \n", i, *vet[i]);

    return 0;
}

/*
#include<stdio.h>
#include<stdlib.h>

int bubbleSort(int vet[], int n){

    int i, j, aux;

    for( i = 0; i < n; i++){
        for(j = 0; j < n - 1 - i; j++){
            if(vet[j] > vet[j + 1]){
                aux = vet [j];
                vet[j] = vet[j+1];
                vet[j+1] = aux;
            }
        }
    }
}

int main(){

    int i, n = 5, v[5] = {3, 1, 5, 2, 4};    

    for(i = 0; i < n; i++)
        printf("vetor[%i]=%i \n", i, v[i]);

    bubbleSort(v, n);
    printf("\n\n");

    for(i = 0; i < n; i ++)
        printf("vetor[%i]=%i \n", i, v[i]);

    return 0;
}

*/
 