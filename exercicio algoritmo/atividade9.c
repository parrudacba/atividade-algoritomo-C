/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int pequenas, medias, grandes;
    float valor_pequenas, valor_medias, valor_grandes, arrecadado;
    printf("Quantidade de camisetas pequenas: ");
    scanf("%i", &pequenas);
    printf("Quantidade de camisetas medias: ");
    scanf("%i", &medias);
    printf("Quantidade de camisetas grandes: ");
    scanf("%i", &grandes);
    valor_pequenas = pequenas*10;
    valor_medias = medias*12;
    valor_grandes = grandes*15;
    arrecadado = valor_pequenas+valor_medias+valor_grandes;
    printf("Valor arrecadado: %f", arrecadado);
    return 0;
}

