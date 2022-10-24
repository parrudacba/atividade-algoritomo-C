/*FFaça um algoritmo que receba dois números, calcule e mostre a divisão do primeiro número
pelo segundo. Sabe-se que o segundo número não pode ser zero, portanto não é necessário se
preocupar com validações...*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float n1=0,n2=0,calc=0;


    printf("digite os 2 numeros");
    scanf("%f %f",&n1,&n2);


                if (n2!=0) {

                    calc = n1/n2;
                    printf("resultado divisao: %f",calc);

                }

                else {
                    printf("informe um segundo nº dirente de 0");
                    scanf("%f",&n2);
                    calc= n1/n2;
                    printf("resultado divisao: %f",calc);

                }





    return 0;
}