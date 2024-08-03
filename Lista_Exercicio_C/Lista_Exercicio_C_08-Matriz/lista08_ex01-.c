//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "21/12/2021"
/*	Objetivo: receba os elementos de uma matriz numérica de dimensões 5x5 (linha e 
coluna) e a imprima na tela como uma matriz, com linhas e colunas.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define LIN 2
#define COL 2

int main(void){
setlocale(LC_ALL,"Portuguese");
//Declarações
	int m[LIN][COL];
	int l, c;

//Instruções
	//printf("");
	//scanf("%",&);
	
	//LEITURA
	for(l=0; l<LIN; l++){
		for(c=0; c<COL; c++){
			printf("Linha %d Coluna %d: ",l+1,c+1);
			scanf("%d",&m[l][c]);
		}
		printf("\n");
	}
	
	//MATRIZ
	for(l=0; l<LIN; l++){
		for(c=0; c<COL; c++){
			printf("[%d]",m[l][c]);
		}
		printf("\n");
	}
	
	return 0;
}



// FIM *************************************************************************************************************************

