/*Faça um algoritmo que receba o peso de uma pessoa, calcule e mostre:
a) o novo peso se a pessoa engordar 15% sobre o peso digitado;
b) o novo peso se a pessoa emagrecer 20% sobre o peso digitado.*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float peso,aumento=0,perca=0;


    printf("digite o seu peso");
    scanf("%f",&peso);


    aumento=peso+(peso*15/100);
    perca=peso - ((peso * 20) / 100);

    printf("engorda: %f \n emagrecimento:%f",aumento,perca);





    return 0;
}