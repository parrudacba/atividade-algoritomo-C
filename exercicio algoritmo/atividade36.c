#include <stdio.h>
#include <math.h>
/*
34. Faça um algoritmo que receba o valor do salário mínimo e o valor do salário de um funcionário,
calcule e mostre a quantidade de salários mínimos que ganha esse funcionário;
 */

int main() {

    float calc,salario,salminimo;

    printf("digite o salario e o minimo");
    scanf("%f %f",&salario,&salminimo);



    calc=salario/salminimo;

    printf("Qtde de salario minimo:%.2f\n\n",calc);




    return 0;
}
