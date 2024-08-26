//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "15/12/2021"
/*	Objetivo: leia dois vetores de 10 posi��es (cada) e fa�a a soma escalar dos elementos 
(posi��o 0 do primeiro vetor com posi��o 0 do segundo vetor, posi��o 1 do primeiro vetor com posi��o 1 do 
segundo vetor, etc.), colocando o resultado em um terceiro vetor. Por fim, apresente os elementos apenas 
do terceiro vetor.*/
//  Entrada.: Dois vetores de int.
//  Sa�da...: Um vetor para soma.
#include<stdio.h>
#include<stdlib.h>
#define TAM 5

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	int i, vet1[TAM], vet2[TAM], vetSoma[TAM];
	
//Instruções
	//printf("");
	//scanf("%",&);
	
	for(i=0; i<TAM; i++){
		printf("Vetor 1 - %d� valor: ",i+1);
		scanf("%d",&vet1[i]);
	}
	
	printf("\n");
	for(i=0; i<TAM; i++){
		printf("Vetor 2 - %d� valor: ",i+1);
		scanf("%d",&vet2[i]);
	}
	
	for(i=0; i<TAM; i++){
		vetSoma[i] = vet1[i] + vet2[i];
	}
	
	printf("\n");
	for(i=0; i<TAM; i++){
		printf("Vetor Soma - %d� valor: %d\n",i+1,vetSoma[i]);
	}
		
	return 0;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************
