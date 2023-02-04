#include <stdio.h>

long fatorial(long number);

int main(){
    int i;

    for(i=1; i <=10;i++){
        printf("%ld\n",fatorial(i));
    }

    return 0;
}

long fatorial(long number){
    if(number<=1){
        return 1;
    }else{
        return number*fatorial(number-1);
    }
}