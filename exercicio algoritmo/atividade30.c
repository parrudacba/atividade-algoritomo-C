/*Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um
algoritmo que receba o salário fixo de um funcionário e o valor de suas vendas, calcule e mostre a
comissão e o salário final do funcionário... .*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float salario,vendas,calc=0;


    printf("digite o salario e o preco das vendas");
    scanf("%f %f",&salario,&vendas);


    calc=salario+(vendas*4/100);

    printf("resultado desconto: %f",calc);





    return 0;
}