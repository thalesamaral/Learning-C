//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "14/12/2021"
/*	Objetivo: leia os elementos de um vetor de 20 posições de reais (float) e apresente o 
vetor na ordem inversa à leitura.*/
//  Entrada.: vetor de float.
//  Saída...: imprimir a sequência inversa.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAM 3

main(){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	float valor[TAM];
	int i;
	
//Instruções
	//printf("");
	//scanf("%",&);
	
	for(i=0; i<TAM; i++){
		printf("%dº valor: ",i+1);
		scanf("%f",&valor[i]);
	}
	
	for(i=TAM-1; i>=0; i--){
		printf("\n%dº valor: %.2f",i+1,valor[i]);
	}
	
	return 0;
}



