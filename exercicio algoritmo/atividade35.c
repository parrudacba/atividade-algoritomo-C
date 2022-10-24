#include <stdio.h>
#include <math.h>
/*
34. Faça um algoritmo que calcule e mostre a área de um losango. Sabe-se que: A =
(diagonal_maior * diagonal_menor)/2;;
 */

int main() {

    float calc,dmaior,dmenor;

    printf("digite a diagonal maior e menor");
    scanf("%f %f",&dmaior,&dmenor);



    calc=(dmaior*dmenor)/2;

    printf("area losango:%f\n\n",calc);




    return 0;
}
