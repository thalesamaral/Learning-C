// Sintese
// Objetivo:
// Autor: Thales Amaral Lima
// Data: 0/0/2020
#include <stdio.h>
#include <conio.h>
#define LIN 2
#define COL 2
int main(void){
//Declarações
	int matriz[LIN][COL];
	int lin[LIN]={0},col[COL]={0};
	int l,c,soma=0;
//Instruções

	printf("Digite numeros para linha e coluna\n");
	//LEITURA
	for(l=0;l<LIN;l++){
		for(c=0;c<COL;c++){
			printf("[%i][%i]: ",l+1,c+1);
			scanf("%i",&matriz[l][c]);
		}
	}
	//QUADRO
	for(l=0;l<LIN;l++){
		printf("\n");
		for(c=0;c<COL;c++){
			printf("[%i]",matriz[l][c]);
		}
	}
	//SOMA
	for(l=0;l<LIN;l++){
		for(c=0;c<COL;c++){
			lin[l]+=matriz[l][c];
			col[c]+=matriz[c][l];
		}
	}
	
	for(l=0;l<LIN;l++)
			printf("\nLinha %i: %i\n",l+1,lin[l]);
			
	for(c=0;c<COL;c++)
			printf("\nColuna %i: %i\n",c+1,col[c]);
	
	//printf("\nsoma: %i",soma);
}

