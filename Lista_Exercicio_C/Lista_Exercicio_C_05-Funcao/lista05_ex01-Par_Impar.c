//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "19/08/2024"
/*	Objetivo:
1. Faça um programa em C que contenha subprograma. É necessário que seu programa como um todo leia um número inteiro n, verifica e imprime se este é par ou ímpar.
*/
#include<stdio.h>
#define TAM

//Protótipo de Função
void verificarParImpar(int);

int main(void){
//Declarações
	int num;
	
//Instruções
	
	printf("Digite um numero: ");
	scanf("%d",&num);
	
	verificarParImpar(num);
	
	return 0;
}

void verificarParImpar(int n){
	
	if(n % 2 == 0)
		printf("\nPAR!\n");
	else
		printf("\nIMPAR!\n");
	
}
