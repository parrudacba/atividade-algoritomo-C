/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float peso, preco;
    printf("Digite o peso do prato: ");
    scanf("%f", &peso);
    preco = 12*peso;
    printf("Valor: %f", preco);

    return 0;
}
