/*A granja Frangotech possui um controle automatizado de cada frango da sua produção. No pé
direito do frango há um anel com um chip de identificação; no pé esquerdo são dois anéis para
indicar o tipo de alimento que ele deve consumir. Sabendo que o anel com chip custa R$4,00 e o
anel de alimento custa R$3,50, faça um algoritmo para calcular o gasto total da granja para marcar
todos os seus frangos...*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int qt;
  float calc;

    printf("digite a quantidade de frangos");
    scanf("%d",&qt);


    calc= qt*11.00; //gasto unitario por frango


    printf("gasto total: %.2f RS",calc);




    return 0;
}