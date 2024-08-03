// Sintese
// Objetivo:
// Autor: Thales Amaral Lima
// Data: 0/0/2020
#include <stdio.h>
#include <conio.h>
#define LIN 5
#define COL 5
int main(void){
//Declarações
	int matriz[100][100];
	int l,c,lin,col,soma=0;
//Instruções
	printf("Linhas\n");
	scanf("%i",&lin);
	printf("Colunas\n");
	scanf("%i",&col);
	
	printf("Digite numeros para linha e coluna\n");
	for(l=0;l<lin;l++){
		for(c=0;c<col;c++){
			printf("[%i][%i]: ",l+1,c+1);
			scanf("%i",&matriz[l][c]);
		}
	}
	
	for(l=0;l<lin;l++){
		for(c=0;c<col;c++){
			soma+=matriz[l][c];
		}
	}
	//QUADRO
	for(l=0;l<lin;l++){
		printf("\n");
		for(c=0;c<col;c++){
			printf("[%i]",matriz[l][c]);
		}
	}
	
	printf("\nSoma: %i",soma);
}

