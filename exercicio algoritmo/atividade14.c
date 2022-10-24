/*Calcule a área de uma pizza que possui um raio R (pi=3.14)...*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){



  float raio,calc;

    printf("digite o raio da pizza");
    scanf("%f",&raio);


                    calc=(3.14)*(pow(raio,2));





    printf("\n area pizza:%f",calc);




    return 0;
}