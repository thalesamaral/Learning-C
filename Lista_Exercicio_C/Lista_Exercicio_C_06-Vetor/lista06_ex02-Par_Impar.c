//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "14/12/2021"
/*	Objetivo: leia os elementos de um vetor de 20 posições de inteiros, conte e apresente 
quantos elementos pares e ímpares existem no vetor.*/
//  Entrada.: vetor de int.
//  Saída...: imprimir se é par ou ímpar.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAM 5

main(){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	int valor[TAM], i, par=0, impar=0;
	
//Instruções
	//printf("");
	//scanf("%",&);
	
	for(i=0; i<TAM; i++){
		printf("%dº valor: ",i+1);
		scanf("%d",&valor[i]);
		if(valor[i] % 2 == 0)
			par++;
		else
			impar++;
	}
	
	printf("\nPar: %d\n",par);
	printf("Ímpar: %d",impar);
	
	return 0;
}



