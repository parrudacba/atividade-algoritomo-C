/*A fábrica de refrigerantes Meia-Cola vende seu produto em três formatos: lata de 350 ml,
garrafa de 600 ml e garrafa de 2 litros. Se um comerciante compra uma determinada quantidade
de cada formato, faça um algoritmo para calcular quantos litros de refrigerante ele comprou...*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int qtlata,qtgarrafa,qt2l;
    float calc;

    printf("digite a quantidade de lata,garrafa e garrafa de 2L adiquirida respectivamente");
    scanf("%d %d %d",&qtlata,&qtgarrafa,&qt2l);


    calc=(qtlata*0.350)+(qtgarrafa*0.6)+(qt2l*2); //valores em L

    printf("litros adquiridos: %f",calc);




    return 0;
}