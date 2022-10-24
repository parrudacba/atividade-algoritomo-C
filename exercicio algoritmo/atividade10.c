/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x1,x2,y1,y2;
    float distancia;
    printf("X1: ");
    scanf("%i", &x1);
    printf("X2: ");
    scanf("%i", &x2);
    printf("Y1: ");
    scanf("%i", &y1);
    printf("Y2: ");
    scanf("%i", &y2);
    distancia = sqrt( pow(x2-x1, 2) + pow(y2-y1, 2) );
    printf("%f", distancia);
    return 0;
}

