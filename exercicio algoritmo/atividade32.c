/*Faça um algoritmo que receba o peso de uma pessoa em quilos, calcule e mostre esse peso
em gramas..*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float peso,calc;


    printf("digite o seu peso");
    scanf("%f",&peso);


  calc=peso*1000;

    printf("peso em gramas:%f",calc);





    return 0;
}