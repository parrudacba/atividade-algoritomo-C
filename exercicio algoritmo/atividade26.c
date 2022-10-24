/*Faça um algoritmo que receba três números, calcule e mostre a multiplicação desses números...*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int n1,n2,n3,calc;


    printf("digite os 3 numeros");
    scanf("%d %d %d",&n1,&n2,&n3);


    calc=n1*n2*n3;


    printf("resultado multiplicacao: %d",calc);



    return 0;
}