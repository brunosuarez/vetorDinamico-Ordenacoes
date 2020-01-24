#include<stdio.h>
#include<stdlib.h>
#include<bubbleSort.h>

void main(){

    int *vet; 
    int sizeVet, i = 0;
    
    vet = (int *)malloc(sizeVet * sizeof(int));

    printf("Qual será o tamanho do seu vetor: ");
    scanf("%i", &sizeVet);

    printf("\n");

    while(sizeVet > i){
        printf("Digite o elemento: ");
        scanf("%i", &vet[i]);
        i++;
    } 
    for(int i = 0; i < sizeVet; i++){
        printf("\n");
        printf("Vetor: %i\n",vet[i]);
    }

    printf("\n");

    printf("Agora escolha uma forma de ordenar esse Vetor recentemente criado\n");
    printf("1 - Insertion Sort: \n");
    printf("2 - Shell Sort: \n");
    printf("3 - Bubble Sort:\n");
    printf("4 - Selection Sort: \n");
    printf("5 - Bucket Sort: \n");
    printf("6 - Couting Sort: \n");
    printf("7 - Radix Sort: \n");
}