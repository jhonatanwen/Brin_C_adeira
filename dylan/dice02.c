#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 13
#define TOTAL 6000

int main(){
    int face,face1, face2; /*valor que será substituído pela rolagem do dado*/
    int roll; /*contador de rolagens*/
    double frequency[SIZE] = {0}; /*Inicializando o primeiro e todos os elementos do array para 0*/
    double percents[SIZE];

    srand(time(NULL));

    for(roll=1; roll <=TOTAL; roll++){
        face1 = 1 + (rand()%6);/*Rolando o dado*/
        face2 = 1 + (rand()%6);
        ++frequency[face1+face2];/*Aumentando o valor do marcador de frequência na face rolada em cada uso do for*/
    }

    for (face=1; face <SIZE ; face++){
        percents[face]= (frequency[face]/TOTAL)*100;
        /*Calculando frequência percentual dos resultados*/
    }

    /*Printando resultados finais*/
    for(face=1 ; face<SIZE; face++){
        printf("%4d%17f\n",face,frequency[face]);
    } 

    for (face=1; face<SIZE; face++){
        printf("%4d%17f\n",face,percents[face]);
    }

    return 0;
}
