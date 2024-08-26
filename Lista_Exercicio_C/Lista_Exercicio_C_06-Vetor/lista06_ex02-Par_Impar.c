//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "14/12/2021"
/*	Objetivo: 
2. Faça um programa em C que leia os elementos de um vetor de 20 posições de inteiros, 
conte e apresente quantos elementos pares e ímpares existem no vetor.
*/
//  Entrada.: vetor de int.
//  Saida...: imprimir se eh par ou impar.
#include<stdio.h>
#include<stdlib.h>
#define TAM 3

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	int valor[TAM], i, par=0, impar=0;
	
//Instruções
	
	for(i=0; i<TAM; i++){
		printf("%do Valor: ",i+1);
		scanf("%d",&valor[i]);
		if(valor[i] % 2 == 0){
			par++;
		}else{
			impar++;
		}
	}
	
	printf("\nPar: %d\n",par);
	printf("Impar: %d\n",impar);
	
	return 0;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************
