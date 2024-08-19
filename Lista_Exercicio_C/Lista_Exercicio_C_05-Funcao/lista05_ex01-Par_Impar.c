//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "09/12/2021"
/*	Objetivo:
1. Faça um programa em C que contenha subprograma. É necessário que seu programa como um todo leia um número inteiro n, verifica e imprime se este é par ou ímpar.
*/
#include<stdio.h>
#include<stdlib.h>
#define TAM

//Protótipo de Função
int verificarParImpar(int);

int main(void){
//Declarações
	int num;
	
//Instruções
	
	printf("Digite um n�mero: ");
	scanf("%d",&num);
	
	verificarParImpar(num);
	
	if(num % 2 == 0)
		printf("PAR!\n");
	else
		printf("�MPAR!\n");
	
	return 0;
}

int verificarParImpar(int n){
	
	if(n % 2 == 0)
		return n;
	else
		return n;
	
}
