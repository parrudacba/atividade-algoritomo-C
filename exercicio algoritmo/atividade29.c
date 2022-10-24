/*Faça um algoritmo que receba o preço de um produto, calcule e mostre o novo preço,
sabendo-se que este sofreu um desconto de 10%.. .*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float preco,calc=0;


    printf("digite o preco");
    scanf("%f",&preco);


    calc=preco-(preco*0.1);

    printf("resultado desconto: %f",calc);





    return 0;
}