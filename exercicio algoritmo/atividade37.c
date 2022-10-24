#include <stdio.h>
#include <math.h>
/*
34. Faça um algoritmo que calcule e mostre a tabuada de um número digitado pelo usuário.;
 */

int main() {

    int calc,n1,i=0;

    printf("digite o numero");
    scanf("%d",&n1);


    while (i<=10) {

        calc=n1*i;

        printf("\n %d x %d = %d\n",n1,i,calc);


        i++;
    }






    return 0;
}
