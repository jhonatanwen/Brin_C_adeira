#include <stdio.h>
#include <string.h>
#include <ctype.h>

int strcounta(char *s){
    int i,conta;
    for(i=conta=0; s[i] != '\0' ; i++){
        if(isalpha(s[i])){
            conta++;
        }
    }
    return conta;
}

int main(){
    char string[20+1];
    int numero;
    

    puts("Insira a string: ");
    gets(string);

    numero = strcounta(string);

    printf("%i\n",numero);


}