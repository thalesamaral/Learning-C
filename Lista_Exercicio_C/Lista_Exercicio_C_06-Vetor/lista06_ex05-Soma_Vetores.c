//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "15/12/2021"
/*	Objetivo:
5. Faça um programa em C que leia dois vetores de 10 posições (cada) e faça a soma escalar 
dos elementos (posição 0 do primeiro vetor com posição 0 do segundo vetor, posição 1 do 
primeiro vetor com posição 1 do segundo vetor, etc.), colocando o resultado em um terceiro 
vetor. Por fim, apresente os elementos apenas do terceiro vetor.
*/
//  Entrada.: Dois vetores de int.
//  Saida...: Soma dois vetores e armazena o resultado em um terceito vetor.
#include<stdio.h>
#include<stdlib.h>
#define TAM 3

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	int i, vet1[TAM], vet2[TAM], vetSoma[TAM];
	
//Instruções
	
	printf("Vetor 1\n");
	for(i=0; i<TAM; i++){
		printf("%do Valor: ",i+1);
		scanf("%d",&vet1[i]);
	}
	
	printf("\nVetor 2\n");
	for(i=0; i<TAM; i++){
		printf("%do Valor: ",i+1);
		scanf("%d",&vet2[i]);
	}
	
	for(i=0; i<TAM; i++){
		vetSoma[i] = vet1[i] + vet2[i];
	}
	
	printf("\nVetor Soma\n");
	for(i=0; i<TAM; i++){
		printf("%do Valor: %d\n",i+1,vetSoma[i]);
	}
		
	return 0;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************
