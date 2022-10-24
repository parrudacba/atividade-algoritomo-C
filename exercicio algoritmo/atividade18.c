/*A empresa Hipotheticus paga R$10,00 por hora normal trabalhada, e R$15,00 por hora extra.
Faça um algoritmo para calcular e imprimir o salário bruto e o salário líquido de um determinado
funcionário. Considere que o salário líquido é igual ao salário bruto descontando-se 10% de
impostos..*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){


  float calcbruto,calcliquido,hora,extra;

    printf("digite a hora trabalhada e em seguida as horas extras");
    scanf("%f %f",&hora,&extra);


    calcbruto=(hora*10)+(extra*15);

    calcliquido=calcbruto*0.1;






    printf("bruto: %.3f RS \n liquido: %.3f RS",calcbruto,calcliquido);




    return 0;
}