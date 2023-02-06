#include <stdio.h>
/*Ao inicializarmos uma variável simbólica
para ser o tamanho pré-definido do array tornamos o código
mais escalável e fácil de controlar*/
#define SIZE 15

int main(){
    
    int i; /*Contador*/
    int array[SIZE];

    for (i=0;i<SIZE;i++){
        array[i]=i;

    }
    
    for(i=0;i<SIZE;i++){
        printf("%i\n",array[i]);
    }
    
    
    
    return 0;
}