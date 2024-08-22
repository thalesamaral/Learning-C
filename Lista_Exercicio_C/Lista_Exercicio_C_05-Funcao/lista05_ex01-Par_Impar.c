//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "19/08/2024"
/*	Objetivo:
1. Faça um programa em C que contenha subprograma. É necessário que seu programa como um todo leia um número inteiro n, verifica e imprime se este é par ou ímpar.
*/
#include<stdio.h>

//Protótipo de Função
void verificar_par_impar(int);

int main(void){
//Declarações
	int numero;
	
//Instruções
	
	printf("Digite um numero: ");
	scanf("%d",&numero);
	
	verificar_par_impar(numero);
	
	return 0;
}

void verificar_par_impar(int num){
	
	if(num % 2 == 0)
		printf("\nPAR!\n");
	else
		printf("\nIMPAR!\n");
	
}
