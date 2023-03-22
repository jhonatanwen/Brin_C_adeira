#include <stdio.h>

int main(){
    char nome[20+1], sobrenome[20+1];
    
    printf("Insira o primeiro nome: "); scanf("%s",nome);
    printf("Insira o  sobrenome: "); scanf("%s",sobrenome);

    printf("%s %s é seu nome completo.\n",nome, sobrenome);
    
    return 0;
}