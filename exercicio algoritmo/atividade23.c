/*Num dia de sol, você deseja medir a altura de um prédio, porém, a trena não é suficientemente
longa. Assumindo que seja possível medir sua sombra e a do prédio no chão, e que você lembre
da sua altura, faça um algoritmo para ler os dados necessários e calcular a altura do prédio...*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){


    float altura,sombra,sombrapredio,calc;

    printf("digite a sua altura a sua sombra, e a sombra do predio");
    scanf("%f %f %f",&altura,&sombra,&sombrapredio);


    calc=(sombrapredio/sombra)*(altura);


    printf("altura predio: %f",calc);




    return 0;
}