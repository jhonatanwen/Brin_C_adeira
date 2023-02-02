#include <stdio.h>

int main(){
    
    /*Definição para alocação de memória inicial das variávis necessárias*/
    int num1, num2;
    int soma;
    
    /*Leitura das variáveis de entrada pelo método scanf*/
    printf("Insira primeiro inteiro: \n");
    scanf("%d", &num1); /*d = decimal integer*/
    
    printf("Insira segundo inteiro: \n");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("A soma é %d \n",soma); /*Printando soma final*/
    
    
    return 0;
}