#include <stdio.h>
#include <math.h>
/*
Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual, calcule e
mostre:
a) a idade dessa pessoa em anos;
b) a idade dessa pessoa em meses;
c) a idade dessa pessoa em dias;
d) a idade dessa pessoa em semanas.
 */

int main() {

   int n1;
    float anos=0,meses=0,dias=0,semanas=0;

    printf("digite o ano de nascimento");
    scanf("%d",&n1);



    anos=(2022)-n1;

    meses=anos*12.00;

    semanas=meses/7.00;
    dias=meses*30.00;


    printf("idade: \n %.f anos, %.1f meses,%.2f semanas, %.2f dias",anos,meses,semanas,dias);



    return 0;
}
