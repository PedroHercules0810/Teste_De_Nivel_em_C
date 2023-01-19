#include <stdio.h>

void invert(int vetor[], int size){
    int aux[size];
    int i;

    for(i = 0; i < size; i++){
        aux[i] = vetor[i];
    }
    for(i = 0; i < size; i ++){
        vetor[i] = aux[size-1-i];
    }
   
}

int main(){
    int vetor[5] = {1,2,3,4,5};

    invert(vetor, 5);

    int c;

    for ( c = 0; c < 5; c++)
    {
        printf("%d \t",vetor[c]);
    }
    
}