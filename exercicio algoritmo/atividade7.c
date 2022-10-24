/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int dia, mes, dias_passados;
    printf("Dia de hoje: ");
    scanf("%i", &dia);
    printf("Mes de hoje: ");
    scanf("%i", &mes);
    dias_passados = ((mes - 1) * 30) + dia;
    printf("Dias desde o começo do ano: %i", dias_passados);

    return 0;
}
