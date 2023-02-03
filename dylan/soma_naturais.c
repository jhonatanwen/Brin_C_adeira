#include <stdio.h>

int main(){
    
    int i, num, soma=0;

    printf("Insira um número: \n");
    scanf("%d",&num);

    for(i=0; i<=num; i += 1){
        soma += i;
    }

    printf("%d\n",soma);
    
    return 0;
}