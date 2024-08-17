// Síntese
// Autor: Thales Amaral Lima
// Data: 17/08/2024
/* Objetivo:
Faça um programa em C que calcula e escreve a seguinte soma:
soma = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50.
*/
#include <stdio.h>

int main(void){
//Declarações
    int i;
	float soma=0, numerador, denominador;
    
//Instruções
    
    for(i=1; i<=50; i++){
        if(i==1){
            numerador = 1;
            denominador = 1;
        }else{
            numerador += 2;
            denominador += 1;
        }
        soma += numerador/denominador;
        printf("+ %g/%g\n",numerador, denominador);
	}
    
    printf("\n\nSoma: %g\n\n",soma);
    return 0;
}
