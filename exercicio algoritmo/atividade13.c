/*Ler um número inteiro (assuma até três dígitos) e imprimir a saída da seguinte forma:
CENTENA = x
DEZENA = x
UNIDADE = x..*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){



  int n1=0,dezena=0,centena=0,unidade=0;

    printf("digite o numero");
    scanf("%d",&n1);


                    while (n1>0) {


                        if (n1 >= 100 && n1 <= 999) {

                            n1 = n1 - 100;
                            centena++;

                        }
                           else if (n1 >= 10 && n1 <= 99) {
                                n1 = n1 - 10;
                                dezena++;
                            }
                           else if  (n1 > 0 && n1 <= 9) {
                                    n1 = n1 - 1;
                                    unidade++;
                            }

                    }






    printf("\n centena: %d \n dezena: %d \n unidade:%d",centena,dezena,unidade);




    return 0;
}