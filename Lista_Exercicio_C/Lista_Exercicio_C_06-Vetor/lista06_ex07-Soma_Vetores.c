//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "15/12/2021"
/*	Objetivo: leia dois vetores de 10 posições (cada) e faça a soma escalar dos elementos 
(posição 0 do primeiro vetor com posição 0 do segundo vetor, posição 1 do primeiro vetor com posição 1 do 
segundo vetor, etc.), colocando o resultado em um terceiro vetor. Por fim, apresente os elementos apenas 
do terceiro vetor.*/
//  Entrada.: Dois vetores de int.
//  Saída...: Um vetor para soma.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAM 5

main(){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	int i, vet1[TAM], vet2[TAM], vetSoma[TAM];
	
//Instruções
	//printf("");
	//scanf("%",&);
	
	for(i=0; i<TAM; i++){
		printf("Vetor 1 - %dº valor: ",i+1);
		scanf("%d",&vet1[i]);
	}
	
	printf("\n");
	for(i=0; i<TAM; i++){
		printf("Vetor 2 - %dº valor: ",i+1);
		scanf("%d",&vet2[i]);
	}
	
	for(i=0; i<TAM; i++){
		vetSoma[i] = vet1[i] + vet2[i];
	}
	
	printf("\n");
	for(i=0; i<TAM; i++){
		printf("Vetor Soma - %dº valor: %d\n",i+1,vetSoma[i]);
	}
		
	return 0;
}



