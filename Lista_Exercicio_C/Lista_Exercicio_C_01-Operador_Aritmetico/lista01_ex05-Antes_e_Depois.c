//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "03/08/2024"
/*  Objetivo:
Faça um programa em C que receba um número inteiro e imprima o seu antecessor, o número lido e seu sucessor.
*/
#include<stdio.h>

int main(void){
//Declarações
	int num;
	
//Instruções
	printf("Digite um numero: ");
	scanf("%d",&num);

	printf("\nAntecessor: %d", num-1);
	printf("\nLido: %d", num);
	printf("\nSucessor: %d", num+1);
	
	return 0;
}

