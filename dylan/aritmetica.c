#include <stdio.h>

int main(){
    
    int num1, num2, num3, soma, media, produto, menor, maior;

    printf("Insira primeiro inteiro: \n");
    scanf("%d", &num1);

    printf("Insira segundo inteiro: \n");
    scanf("%d", &num2);

    printf("Insira terceiro inteiro: \n");
    scanf("%d", &num3);

    soma = num1 + num2 + num3;
    produto = num1*num2*num3;

    media = (soma/3) + (soma%3);

    if(num1 >= num2 && num1 >= num3){
        maior = num1;
    }

    if(num2 >= num1 && num2 >= num3){
        maior = num2;
    }

    if(num3 >= num2 && num3 >= num1){
        maior = num3;
    }
    

    if(num1 <= num2 && num1 <= num3){
        menor = num1;
    }

    if(num2 <= num1 && num2 <= num3){
        menor = num2;
    }

    if(num3 <= num2 && num3 <= num1){
        menor = num3;
    }

    printf("O maior é %d\n", maior);
    printf("O menor é %d\n", menor);
    printf("A soma é %d\n",soma);
    printf("O produto é %d\n",produto);
    printf("A média é %d\n", media);


    return 0;
}