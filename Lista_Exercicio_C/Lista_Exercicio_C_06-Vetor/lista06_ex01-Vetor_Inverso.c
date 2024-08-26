//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "14/12/2021"
/*	Objetivo:
1. Faça um programa em C que leia os elementos de um vetor de 20 posições de reais (float) 
e apresente o vetor na ordem inversa à leitura.
*/
//  Entrada.: vetor de float.
//  Saída...: imprimir a sequencia inversa.
#include<stdio.h>
#define TAM 3

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	float valor[TAM];
	int i;
	
//Instruções	
	for(i=0; i<TAM; i++){
		printf("%do Valor: ",i+1);
		scanf("%f",&valor[i]);
	}
	
	printf("\nInverso\n");

	for(i=TAM-1; i>=0; i--){
		printf("%do Valor = %.2f\n",i+1,valor[i]);
	}
	
	return 0;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************
