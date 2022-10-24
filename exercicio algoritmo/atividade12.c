/*Faça um algoritmo para ler o salário de um funcionário e aumentá-Io em 15%. Após o aumento,
desconte 8% de impostos. Imprima o salário inicial, o salário com o aumento e o salário final..*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){



   float salario,aumento,desconto;

    printf("digite o seu salario");
    scanf("%f",&salario);



    aumento=(salario*15)/100;
    desconto=aumento*0.8;

    printf("salario inicial: %f \n com aumento: %f \n com desconto: %f",salario,aumento,desconto);




    return 0;
}