/*Calcule o volume de uma caixa d'água cilíndrica..*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){


    float raio,altura,calc;

    printf("entre com o raio e a altura");
    scanf("%f %f",&raio,&altura);


    calc=3.14*(raio*raio) *altura;



    printf("resultado: %f",calc);




    return 0;
}