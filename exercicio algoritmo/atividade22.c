/*Pedrinho tem um cofrinho com muitas moedas, e deseja saber quantos reais conseguiu
poupar. Faça um algoritmo para ler a quantidade de cada tipo de moeda, e imprimir o valor total
economizado, em reais. Considere que existam moedas de 1, 5, 10, 25 e 50 centavos, e ainda
moedas de 1 real. Não havendo moeda de um tipo, a quantidade respectiva é zero..*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int qt1,qt5,qt10,qt25,qt50;
    float calc;

    printf("digite a quantidade de modedas de 1, 5, 10, 25,50 respectivamente");
    scanf("%d %d %d %d %d",&qt1,&qt5,&qt10,&qt25,&qt50);


    calc=(qt1*0.01)+(qt5*0.5)+(qt25*0.25)+(qt10*0.1)+(qt50*0.5);


    printf("reais poupados: %.3f",calc);




    return 0;
}