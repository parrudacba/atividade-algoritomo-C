#include <stdio.h>
#include <math.h>
/*
34. Faça um algoritmo que calcule e mostre a área de um quadrado.
Sabe-se que: A = lado * lado;
 */

int main() {

    float calc,lado;

    printf("digite o lado de um quadrado");
    scanf("%f",&lado);



    calc=pow(lado,2);

    printf("area trapezio:%f\n\n",calc);




    return 0;
}
