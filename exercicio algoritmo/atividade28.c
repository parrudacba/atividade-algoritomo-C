/*Faça um algoritmo que receba duas notas, calcule e mostre a média ponderada dessas notas,
considerando peso 2 para a primeira nota e peso 3 para a segunda nota. .*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float n1=0,n2=0,calc=0;


    printf("digite os 2 notas");
    scanf("%f %f",&n1,&n2);


    calc=((n1*2)+(n2*3))/(5);

    printf("resultado media: %f",calc);





    return 0;
}