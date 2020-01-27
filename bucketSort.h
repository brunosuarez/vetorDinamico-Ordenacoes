#include <stdio.h>
#include <stdlib.h>
 
struct bucket {
    int count;
    int* value;
};
 
int comparacao(const void* first, const void* second){
    int x = *((int*)first), y =  *((int*)second);
    if (x == y){
        return 0;
    }
    else if (x < y){
        return -1;
    }
    else{
        return 1;
    }
}
 
void bucketSort(int vet[],int n){
    struct bucket buckets[3];
    int i, j, k;
    for (i = 0; i < 3; i++){
        buckets[i].count = 0;
        buckets[i].value = (int*)malloc(sizeof(int) * n);
    }
    
    for (i = 0; i < n; i++){
        if (vet[i] < 0){
            buckets[0].value[buckets[0].count++] = vet[i];
        }
        else if (vet[i] > 10){
            buckets[2].value[buckets[2].count++] = vet[i];
        }
        else{
            buckets[1].value[buckets[1].count++] = vet[i];
        }
    }
    for (k = 0, i = 0; i < 3; i++){
        //ordenando os elementos do bucket via quicksort
        qsort(buckets[i].value, buckets[i].count, sizeof(int), &comparacao);
        for (j = 0; j < buckets[i].count; j++){
           vet[k + j] = buckets[i].value[j];
        }
        k += buckets[i].count;
        free(buckets[i].value);
    }
}

int main(char *arg[]) {
 
    int vet[100] = { 5, -34, 10, 1, -42, 123, 2, 395, 5, 4, 1234, 7 };
    int i = 12,j,k,n;
 
    n=i;
    printf("Antes de Classificar\n");
    for (j = 0; j<i; j++){
        printf("%d ", vet[j]);
    }
 
    bucketSort(vet, n); 
    printf("\n Depois de Classificar\n");
    for (k = 0; k<i; k++)
        printf("%d ", vet[k]);   
 
 
    return 0;
}