/*Uma fábrica controla o tempo de trabalho sem acidentes pela quantidade de dias. Faça um
algoritmo para converter este tempo em anos, meses e dias. Assuma que cada mês possui sempre
30 dias..*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){


   int dias;
   float meses,anos;

    printf("digite os dias sem acidente");
    scanf("%d",&dias);



    meses=(float)dias/30.00;
    anos=(float)dias/365.00;

    printf("a firma esta a %d dias sem acidente,que sao  %3.f meses ou %3.f anos",dias,meses,anos);




    return 0;
}