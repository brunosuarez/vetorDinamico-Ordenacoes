#include<stdio.h>
#include<stdlib.h>
/*
#include<insertionSort.h>
#include<shellSort.h>
#include<bubbleSort.h>
#include<selectionSort.h>
#include<bucketSort.h>
#include<coutingSort.h>
#include<radixSort.h>
*/

void main(){

    int *vet;
    int sizeVet, i = 0;
    
    vet = ( int*) malloc (sizeVet* sizeof ( int ));

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
        printf (" Vetor: % i \n" , vet[i]);
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


    int opt;
    int n;
    switch (opt){
        case 1:
        insertionSort(vet, n);
        imprimeVetor(vet);
        break;

        case 2:
        shellSort(vet, n);
        imprimeVetor(vet);
        break;

        case 3:
        bubbleSort(vet, n);
        imprimeVetor(vet);
        break;

        case 4:
        selectionSort(vet, n);
        imprimeVetor(vet);
        break;

        case 5:
        bucketSort(vet[i],n);
        imprimeVetor(vet);
        break;

        case 6:
        coutingSort(vet, n);
        imprimeVetor(vet);
        break;

        case 7:
        radixSort(vet, n);
        imprimeVetor(vet);
        break;
    
    default:
        printf("Valor inválido, digite algo entre 1 e 7");
    }

    void imprimeVetor(int *vet[]){
        for(int i = 0 ; i <sizeVet; i++) {
        printf (" \n ");
        printf (" Vetor: % i \n" , vet[i]);
    };
    
}