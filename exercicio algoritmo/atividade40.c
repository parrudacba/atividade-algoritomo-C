#include <stdio.h>
#include <math.h>
/*
Faça um algoritmo que receba o valor dos catetos de um triângulo, calcule e mostre o valor da
hipotenusa.
 */

int main() {


    float c1,c2,h;

    printf("\n\n\nDigite os dois catetos");
    scanf("%f %f",&c1,&c2);


    h=sqrt(pow(c1,2)+ pow(c2,2));



    printf("\n\nHipotenusa: %.3f",h);



    return 0;
}
