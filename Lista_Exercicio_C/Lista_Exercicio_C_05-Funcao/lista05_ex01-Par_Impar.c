//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "09/12/2021"
/*	Objetivo: É necessário que seu programa como um todo leia um
número inteiro n, verifica e imprime se este é par ou ímpar.*/
//  Entrada.: Número.
//  Saída...: Par ou Ímpar
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAM
//Protótipo de Função
int verificarParImpar(int);

int main(void){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	int num;
	
//Instruções
	//printf("");
	//scanf("%",&);
	
	printf("Digite um número: ");
	scanf("%d",&num);
	
	verificarParImpar(num);
	
	if(num % 2 == 0)
		printf("PAR!\n");
	else
		printf("ÍMPAR!\n");
	
	return 0;
}

int verificarParImpar(int n){
	
	if(n % 2 == 0)
		return n;
	else
		return n;
	
}
