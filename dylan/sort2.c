#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int ref_sort(int array[], int size){
    auto int i,j,dummy;

    puts("Array organizado: ");
    /*Organizando o array*/
    for (j = 0; j < size-1; j++)
    {
        for (i = j+1; i < size ; i++)
        {
            if (array[i] < array[j])
            {
                dummy = array[i];
                array[i] = array[j];
                array[j] = dummy;
            }
        }
    }
}


int main(){
    int array[SIZE];
    int i;

    puts("Insira o array de EXATAMENTE 10 números: ");
    for(i=1 ; i<SIZE ; i++){
        scanf("%d",&array[i]);
    }

    ref_sort(array,SIZE);

    for(i=0 ; i <SIZE ; i++){
        printf("%4d",array[i]);
    }
    puts("\n");

    
    return 0;
}

