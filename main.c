#include<stdio.h>
#include<stdlib.h>

#include"insertionSort.h"
#include"shellSort.h"
#include"bubbleSort.h"
#include"selectionSort.h"
#include"bucketSort.h"
#include"coutingSort.h"
#include"radixSort.h"

void main(){

    int *vet;
    int sizeVet, i = 0;

    vet = ( int*) malloc (sizeVet* sizeof (int));

    printf ("Qual será o tamanho do seu vetor: ");
    scanf ("%i", &sizeVet);

    printf("\n");

    while (sizeVet> i) {
        printf ("Digite o elemento: ");
        scanf("%i" , &vet[i]);
        i ++;
    }
    for(int i = 0 ; i <sizeVet; i ++) {
        printf (" \n ");
        printf (" Elemento do Vetor: %i" , vet[i]);
        printf (" \n ");
    }

    printf("\n");

    int opt;
    printf("Agora escolha uma forma de ordenar esse Vetor recentemente criado: \n");
    scanf("%i", &opt);
    printf("1 - Insertion Sort: \n");
    printf("2 - Shell Sort: \n");
    printf("3 - Bubble Sort:\n");
    printf("4 - Selection Sort: \n");
    printf("5 - Bucket Sort: \n");
    printf("6 - Couting Sort: \n");
    printf("7 - Radix Sort: \n");

    /*void imprimeVetor(int **vet[]){
        for(int i = 0 ; i <sizeVet; i++) {
        printf (" \n ");
        printf (" Vetor: %i" , vet[i]);
    }*/

    int n, size;
    switch (opt){
        case 1:
        printf("Vetor Ordenado por Insertion Sort");
        insertionSort(vet, n);
        break;

        case 2:
        printf("Vetor Ordenado por Shell Sort");
        shellSort(vet, n);
        break;

        case 3:
        printf("Vetor Ordenado por Bubble Sort");
        bubbleSort(vet, n);
        break;

        case 4:
        printf("Vetor Ordenado por Selection Sort");
        selectionSort(vet, n);
        break;

        case 5:
        printf("Vetor Ordenado por Bucket Sort");
        bucketSort(vet, n);
        break;

        case 6:
        printf("Vetor Ordenado por Couting Sort");
        coutingSort(vet, n);
        break;

        case 7:
        printf("Vetor Ordenado por Radix Sort");
        radixSort(vet,n);
        break;

    default:
        printf("Valor inválido, digite algo entre 1 e 7");
    }


}
