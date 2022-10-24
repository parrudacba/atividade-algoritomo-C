/*Alguns países medem temperaturas em graus Celsius, e outros em graus Fahrenheit. Faça um
algoritmo para ler uma temperatura Celsius e imprimi-Ia em Fahrenheit (pesquise como fazer este
tipo de conversão)..*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int c;
  float f;

    printf("digite a temperatura em Celsius");
    scanf("%d",&c);




      f=(c * 1,8) + 32;


    printf("temperatura em Fahrenheit: %.3f",f);




    return 0;
}