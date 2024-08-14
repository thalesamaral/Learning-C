//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "01/12/2021"
/*	Objetivo:
Faça um programa em C que receba um valor e imprima se é positivo, negativo ou zero.
*/
#include<stdio.h>

int main(void){
//Declarações
	int valor;
	
//Instruções
	printf("Digite um valor: ");
	scanf("%d",&valor);
	
	if(valor>0)
		printf("\nPositivo\n");
	else if(valor<0)
		printf("Negativo\n");
	else
		printf("Zero\n");
	
	return 0;
}

