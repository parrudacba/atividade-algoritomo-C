/*Uma confecção produz X blusas de lã e para isto gasta uma certa quantidade de novelos. Faça
um algoritmo para calcular quantos novelos de lã ela gasta por blusa...*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int qtblusa,qtnovelo;
    float calc;

    printf("digite a quantidade de blusas e novelos gastos");
    scanf("%d %d",&qtblusa,&qtnovelo);


    calc=(float )qtnovelo/(float)qtblusa;


    printf("novelo por blusa: %f",calc);




    return 0;
}