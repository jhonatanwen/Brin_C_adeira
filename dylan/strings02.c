#include <stdio.h>

int main(){
    char nome[50+1];

    puts("Insira seu nome: ");
    gets(nome);

    printf("Seu nome completo é %s\n",nome);

    return 0;
}