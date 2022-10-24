/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float valor_gasolina, valor_pagamento, litros;
    printf("Digite o valor da gasolina: ");
    scanf("%f", &valor_gasolina);
    printf("Digite o valor pago: ");
    scanf("%f", &valor_pagamento);
    litros = valor_pagamento/valor_gasolina;
    printf("Litros colocados: %f", litros);

    return 0;
}