#include <stdio.h>
#include <math.h>
/*
João recebeu seu salário de R$ 1200,00 e precisa pagar duas contas (C1=R$ 200,00 e
C2=R$120,00) que estão atrasadas. Como as contas estão atrasadas, João terá de pagar multa de
2% sobre cada conta. Faça um algoritmo que calcule e mostre quanto restará do salário do João
 */

int main() {


    float calc,calc2,calc3;

    printf("\n\n\nentradas ja defininas na questao\n\n"); // mas podia ser dinamico tb

    calc=((200+120)*2)/100;
    calc2=1200-calc;
    calc3=200+120;



    printf("a soma das dividas de joao e de %.2f RS\n o valor com juros: %.2f RS\n o valor descontado do salario: %.2f RS",calc3,calc,calc2);



    return 0;
}
