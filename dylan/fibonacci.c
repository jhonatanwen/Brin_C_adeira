#include <stdio.h>

long fibonacci(int number);


int main(){
    
    int i;

    for(i=1; i<=10; i++){
        printf("%ld\n",fibonacci(i));
    }
    
    return 0;
}

long fibonacci(int number){
    int i;

    if(number<=2){
        return 1;
    } else {
        return fibonacci(number-1)+fibonacci(number-2);
    }
}