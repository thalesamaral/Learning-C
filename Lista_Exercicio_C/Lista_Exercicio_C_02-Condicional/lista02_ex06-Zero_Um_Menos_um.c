//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "01/12/2021"
/*	Objetivo: receba um valor e imprima se � positivo, negativo ou zero.*/
//  Entrada.: valor.
//  Sa�da...: positivo, negativo ou zero.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	int valor;
	
//Instru��es
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

