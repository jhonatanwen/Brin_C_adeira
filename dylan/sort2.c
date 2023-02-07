#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int sort(int array[], int size){
    auto int i,j,dummy;
    
    srand(time(NULL));

    puts("Array organizado: ");
    /*Organizando o array*/
    for (j = 1; j < size; j++)
    {
        for (i = 0; i < size - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                dummy = array[i];
                array[i] = array[i + 1];
                array[i + 1] = dummy;
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

    sort(array,SIZE);

    for(i=0 ; i <SIZE ; i++){
        printf("%4d",array[i]);
    }
    puts("\n");

    
    return 0;
}

