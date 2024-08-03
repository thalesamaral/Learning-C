//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "30/11/2021"
/*  Objetivo:
Faça um programa em C que receba um número inteiro e imprima o seu antecessor, o número lido e seu sucessor.
*/
#include<stdio.h>
#include<stdlib.h>

int main(void){
//Declarações
	int num[2], i;
	
//Instruções
	printf("Digite um numero: ");
	scanf("%d",&num[1]);
	
	num[0] = num[1]-1;
	num[2] = num[1]+1;
	
	printf("\nNumeros em FOR LOOP\n");
	for(i=0; i<3; i++){
		printf("%d\n",num[i]);
	}
	
	printf("\nAntecessor: %d", num[0]);
	printf("\nLido: %d", num[1]);
	printf("\nSucessor: %d", num[2]);
	
	return 0;
}

