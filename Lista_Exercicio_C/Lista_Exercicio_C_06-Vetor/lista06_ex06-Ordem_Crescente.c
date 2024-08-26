//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "15/12/2021"
/*	Objetivo: leia os elementos de um vetor de 20 posi��es de inteiros, verifique e informe se 
o vetor est� ordenado em ordem crescente. Ou seja, se os valores das posi��es do vetor apresentam os 
valores aumentando.*/
//  Entrada.: Um vetor de int.
//  Sa�da...: Informar se a sequ�cia � crescente ou n�o.
#include<stdio.h>
#include<stdlib.h>
#define TAM 3

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	int v[TAM], i, j, flag=0;
	
//Instruções
	//printf("");
	//scanf("%",&);
	
	for(i=0; i<TAM; i++){
		printf("%d� valor: ",i+1);
		scanf("%d",&v[i]);
	}
	
	for(i=0; i<TAM; i++){
		if(v[i] < TAM)
			if(v[i] > v[i+1])
				flag=1;
	}
	
	if(flag==1)
		printf("\nN�o � crescente");
	else
		printf("\n� crescente");
	
	return 0;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************
