# include <stdio.h>
# include <stdlib.h>
 
int  bubbleSort(int vet[], int n){
 
    int i, j = 0, aux;
 
    for(i = 0; i < n; i++){
        for(j; j <n - 1 - i; j ++) {
            if (vet[j] > vet[j+1]) {
                aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = aux;
            }
        }
    }


    return 0;
}