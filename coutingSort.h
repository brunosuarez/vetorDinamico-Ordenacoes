#include <stdio.h>
#include <stdlib.h>  
#include <string.h> 
#define RANGE 255 
  
/*função que classifica a sequência fornecida pelo vetor vet*/ 
void countSort(char vet[]) { 
    char output[strlen(vet)]; 
  
    int count[RANGE + 1], i; 
    memset(count, 0, sizeof(count)); 
  
    for(i = 0; vet[i]; ++i) 
        ++count[vet[i]]; 
 
    for (i = 1; i <= RANGE; ++i) 
        count[i] += count[i-1]; 
  
    for (i = 0; vet[i]; ++i) { 
        output[count[vet[i]]-1] = vet[i]; 
        --count[vet[i]]; 
    } 
 
    for (i = 0; vet[i]; ++i){ 
        vet[i] = output[i]; 
    } 
}
  
int main() { 
    char vet[] = "geeksforgeeks";
  
    countSort(vet); 
  
    printf("Sorted character array is %sn", vet); 
    return 0; 
} 