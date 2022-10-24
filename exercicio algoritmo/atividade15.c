/*Três amigos, Carlos, André e Felipe. decidiram rachar igualmente a conta de um bar. Faça um
algoritmo para ler o valor total da conta e imprimir quanto cada um deve pagar, mas faça com que
Carlos e André não paguem centavos. Ex: uma conta de R$101,53 resulta em R$33,00 para
Carlos, R$33,00 para André e R$35,53 para Felipe..*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int pagar;
  float conta,div,cents=0,f=0;

    printf("digite o valor da conta");
    scanf("%f",&conta);




    div=conta/3;


    cents= div- (int)div;

    pagar=div-cents;


    f=conta-(pagar*2);


    printf("\n carlos:%d \n andre:%d \n Felipe:%.3f",pagar,pagar,f);




    return 0;
}