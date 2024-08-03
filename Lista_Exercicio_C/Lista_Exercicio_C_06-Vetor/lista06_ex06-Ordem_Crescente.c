//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "15/12/2021"
/*	Objetivo: leia os elementos de um vetor de 20 posições de inteiros, verifique e informe se 
o vetor está ordenado em ordem crescente. Ou seja, se os valores das posições do vetor apresentam os 
valores aumentando.*/
//  Entrada.: Um vetor de int.
//  Saída...: Informar se a sequêcia é crescente ou não.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAM 3

main(){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	int v[TAM], i, j, flag=0;
	
//Instruções
	//printf("");
	//scanf("%",&);
	
	for(i=0; i<TAM; i++){
		printf("%dº valor: ",i+1);
		scanf("%d",&v[i]);
	}
	
	for(i=0; i<TAM; i++){
		if(v[i] < TAM)
			if(v[i] > v[i+1])
				flag=1;
	}
	
	if(flag==1)
		printf("\nNão é crescente");
	else
		printf("\nÉ crescente");
	
	return 0;
}



