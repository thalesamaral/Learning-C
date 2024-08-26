//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "14/12/2021"
/*	Objetivo: leia os elementos de um vetor de 20 posi��es de inteiros e apresente o vetor. 
Em seguida troque o primeiro elemento com o �ltimo, o segundo com o pen�ltimo, o terceiro com o 
antepen�ltimo, e assim sucessivamente. Por fim, apresente novamente o vetor depois das trocas.*/
//  Entrada.: Um vetor de int.
//  Sa�da...: vetor valores invertidos
#include<stdio.h>
#include<stdlib.h>
#define TAM 5

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	int i, j, v[TAM], aux;
	
//Instruções
	//printf("");
	//scanf("%",&);
	
	for(i=0; i<TAM; i++){
		printf("%d� valor: ",i+1);
		scanf("%d",&v[i]);
	}
	
	printf("\nAntes\n");
	for(i=0; i<TAM; i++){
		printf("%d� valor: %d\n",i,v[i]);
	}
	
	for(i=0, j=TAM-1; i<TAM/2; i++, j--){
		aux = v[i];
		v[i] = v[j];
		v[j] = aux;
	}
	
	printf("\nDepois");
	for(i=0; i<TAM; i++){
		printf("\n%d� valor: %d",i,v[i]);
	}
	
	return 0;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************
