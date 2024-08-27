//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "14/12/2021"
/*	Objetivo:
4. Faça um programa em C que leia os elementos de um vetor de 20 posições de inteiros e 
apresente o vetor. Em seguida troque o primeiro elemento com o último, o segundo com o 
penúltimo, o terceiro com o antepenúltimo, e assim sucessivamente. Por fim, apresente 
novamente o vetor depois das trocas.
*/
//  Entrada.: vetor de int
//  Saida...: vetor invertido
#include<stdio.h>
#include<stdlib.h>
#define TAM 5

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	int i, j, v[TAM], aux;
	
//Instruções
	/*
	for(i=0; i<TAM; i++){
		printf("%do Valor: ",i+1);
		scanf("%d",&v[i]);
	}
	*/

	v[0] = 0;
	v[1] = 1;
	v[2] = 2;
	v[3] = 3;
	v[4] = 4;

	printf("\nVetor Original\n");
	for(i=0; i<TAM; i++){
		printf("%do Valor: %d\n",i+1,v[i]);
	}
	/*
	i = primeiro & i++; j = ultimo & j--
	*/
	for(i=0, j=TAM-1; i<TAM/2; i++, j--){
		aux = v[i];
		v[i] = v[j];
		v[j] = aux;
	}
	
	printf("\nVetor Invertido");
	for(i=0; i<TAM; i++){
		printf("\n%do Valor: %d",i+1,v[i]);
	}
	
	return 0;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************
