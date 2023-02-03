#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rolld6(int numero){
    int i,value;

    for (i = 1; i <= numero; i++)
    {
        value = 1 + (rand() % 6);
        printf("%d ", value);

        if (i % 5 == 0)
        {
            printf("\n");
        }
    }
}

int main(){
    
    int numDados;

    printf("Insira quandos dados você quer rolar: ");
    scanf("%d",&numDados);

    rolld6(numDados);
    
    return 0;
}