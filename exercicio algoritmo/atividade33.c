#include <stdio.h>

/*
Faça um algoritmo que calcule e mostre a área de um trapézio. Sabe-se que: A = (base maior +
base menor)* altura)/2
 */

int main() {

    float bmaior,bmenor,altura,calc;

    printf("digite a base maior,base menor e a altura");
    scanf("%f %f %f",&bmaior,&bmenor,&altura);



    calc=((bmaior+bmenor)*altura)/2;

    printf("area trapezio:%f\n\n",calc);




    return 0;
}
