/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){

  int ferraduras, cavalos;
  printf("Quantos cavalos comprados?\n");
  scanf("%d", &cavalos);

  ferraduras = cavalos * 4 ;

  printf("São necessárias %d ferraduras para equipa-los\n", ferraduras);

  return 0;
}
