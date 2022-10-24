/*A lanchonete Gostosura vende apenas um tipo de sanduíche, cujo recheio inclui duas fatias de
queijo, uma fatia de presunto e uma rodela de hambúrguer. Sabendo que cada fatia de queijo ou
presunto pesa 50 gramas, e que a rodela de hambúrguer pesa 100 gramas, faça um algoritmo em
que o dono forneça a quantidade de sanduíches a fazer, e a máquina informe as quantidades (em
quilos) de queijo, presunto e carne necessários para compra...*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int qt;
  float queijo,presunto,hamburguer;

    printf("digite a quantidade de sanduiches");
    scanf("%d",&qt);




        queijo=qt*(0.1); //valor já em KG
        presunto=qt*(0.05);
        hamburguer=qt*(0.01);


    printf("quantidades em KG\n\n queijo: %.3f kg \n presunto: %.3f Kg \n hamburguer: %.3f Kg",queijo,presunto,hamburguer);




    return 0;
}