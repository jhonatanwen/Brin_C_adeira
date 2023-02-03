#include <stdio.h>

int main(){
    
    int num,i,j;
    
    /*Aqui usa-se scanf e printf na mesma linha com o intuito*/
    /*de afirmar que participam do mesmo tipo de comando: receber dados do user*/
    printf("Insira um número: "); scanf("%d",&num);

    /*Loop inicial para gerar as linhas de caracteres*/
    for(i=1; i<= num ; i++){
        /*Loop auxiliar para gerar as colunas de caracteres*/
        for(j=1; j<= num; j++){
            /*sem essa linha de código a matrix seria quadrada*/
            if(j>i){break;}
            putchar('*');
        }
        putchar('\n');

    }
    return 0;
}