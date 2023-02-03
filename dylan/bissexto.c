#include <stdio.h>

int main(){
    
    int ano,bissexto = 0;

    printf("Insira o ano a ser analizado: \n");
    scanf("%d",&ano);

    if(ano%4 == 0 && ano%100 != 0){
        bissexto = 1;
    } 
    
    if(bissexto){
        printf("o ano é bissexto\n");
    } else {
        printf("o ano não é bissexto\n");
    }
    
    
    return 0;
}