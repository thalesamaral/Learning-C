// Sintese
// Objetivo:
// Autor: Thales Amaral Lima
// Data: 08/03/2020
#include <stdio.h>
#include <conio.h>
#define LIN 2
#define COL 2
int main(void){
//Declara��es
	int matriz[LIN][COL];
	int l,c;
//Instru��es

	printf("Digite numeros para linha e coluna\n");
	for(l=0;l<LIN;l++){
		for(c=0;c<COL;c++){
			scanf("%i",&matriz[l][c]);
		}
	}
	
	for(l=0;l<LIN;l++){
		printf("\n",matriz[l][c]);
		for(c=0;c<COL;c++){
			printf("[%i]",matriz[l][c]);
		}
	}
	
}

