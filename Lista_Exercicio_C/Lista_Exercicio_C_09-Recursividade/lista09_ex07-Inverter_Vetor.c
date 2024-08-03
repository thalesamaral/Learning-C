// Sintese
// Objetivo:
// Autor: Thales Amaral Lima
// Data: 29/09/2020
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define TAM 4

int main(void){
//Declarações
	int i, n[TAM];
	
//Instruções
	printf("Digite numeros para o vetor\n");
	for(i=0; i<TAM; i++){
		printf("%i - ",i+1);
		scanf("%i",& n[i]);
	}
	
	inverter(n, 0, TAM-1);
	for(i=0; i<TAM; i++)
		printf("%i ",n[i] );
}

void inverter(int n[], int i, int j){
	
	for(i=0; i<=j; i++)
		if (i<j){
			troca(&n, i, j);
			inverter(n, i+1, j-1);
		}
}

int troca(int *n[], int i, int j){
	int aux = *n[i];
		*n[j] = *n[i];
		*n[j] = aux;
}


