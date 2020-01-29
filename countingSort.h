#include <stdio.h>
#include <stdlib.h>  
#include <string.h> 

void countingSort(int vet[],int n,int max){
     int count[50]={0},i,j;
     
     for(i=0;i<n;++i)
      count[vet[i]]=count[vet[i]]+1;
      
     printf("\nVetor:");
     
     for(i=0;i<=max;++i)
      for(j=1;j<=count[i];++j)
       printf("%d",i);
}
 
