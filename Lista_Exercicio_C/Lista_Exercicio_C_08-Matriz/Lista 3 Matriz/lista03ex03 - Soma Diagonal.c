// Sintese
// Objetivo:
// Autor: Thales Amaral Lima
// Data: 08/03/2020
#include <stdio.h>
#include <conio.h>
#define LIN 3
#define COL 3
int main(void){
//Declarações
	int matriz[LIN][COL];
	int l,c,i,soma=0;
//Instruções

	printf("Digite numeros para linha e coluna\n");
	//LEITURA
	for(l=0;l<LIN;l++){
		for(c=0;c<COL;c++){
			scanf("%i",&matriz[l][c]);
		}
	}
	//QUADRO
	for(l=0;l<LIN;l++){
		printf("\n",matriz[l][c]);
		for(c=0;c<COL;c++){
			printf("[%i]",matriz[l][c]);
		}
	}
	//SOMA
	for(i=0;i<LIN;i++)
		soma+=matriz[i][i];
	
	printf("\nsoma: %i",soma);
}
	
