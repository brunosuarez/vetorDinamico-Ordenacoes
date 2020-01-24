#include<stdio.h>
#include<stdlib.h>

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
    
    
}