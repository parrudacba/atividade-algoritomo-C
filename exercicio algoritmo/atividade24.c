/*Um tonel de refresco é feito com 8 partes de água mineral e 2 partes de suco de maracujá.
Faça um algoritmo para calcular quantos litros de água e de suco são necessários para se fazer X
litros de refresco (informados pelo usuário)...*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){


    float qtlitros,calc,agua,suco;

    printf("digite a quantidade de suco");
    scanf("%f",&qtlitros);


    calc=(qtlitros/10);   // seguinte n entendi mt mas fiz assim
					// considerei as partes como litros
    agua=calc*2;    // e que a soma dessas partes dava 1 unidade

    suco=calc*8;    // ai recebe a quantidade de litro pra saber      
                    // o quanto de suco e agua div pela unidade
			//tiver errado avisa q noix corrige        
                           


    printf("agua: %f\n suco: %f",agua,suco);




    return 0;
}