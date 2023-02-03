#include <stdio.h>

void linha(int num){
    int i;
    for(i=1; i <= num; i++){
        putchar('*');
    }
    putchar('\n');
}

int main(){
    
    int i, numero;

    printf("Insira um inteiro: "); scanf("%d",&numero);

    for(i=1; i <= numero; i++){
        linha(i);
    }

    for (i=numero;i>=1;i--){
        linha(i);
    }


    return 0;
}