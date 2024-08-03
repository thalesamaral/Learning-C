// Sintese
// Objetivo:
// Autor: Thales Amaral Lima
// Data: 0/0/2020
#include <stdio.h>
#include <conio.h>
#define TAM 6
int main(void){
//Declarações
	int n[TAM], nInverso[TAM];
	int i=0, aux, fim=TAM-1;
//Instruções
	for(i=0;i<TAM;i++)
		scanf("%i",&n[i]);

	for(i=0;i<TAM;i++){
		nInverso[i] = n[fim-i];
	
	for(i=0;i<TAM;i++)
		printf("\n %i ", nInverso[i]);
	
	return 0;
}

