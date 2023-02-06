#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10


int main(){
    
    int array[SIZE];
    int i, j ,dummy;

    srand(time(NULL));

    puts("Array original aleatório: ");
    for(i=0 ; i<SIZE ; i++){
        array[i] = rand()%100;
        printf("%4d",array[i]);
    }
    puts("\n");

    puts("Array organizado: ");
    /*Organizando o array*/
    for (j = 1; j < SIZE; j++)
    {
        for (i = 0; i < SIZE - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                dummy = array[i];
                array[i] = array[i + 1];
                array[i + 1] = dummy;
            }
        }
    }

    for(i=0 ; i <SIZE ; i++){
        printf("%4d",array[i]);
    }
    puts("\n");
    return 0;
}