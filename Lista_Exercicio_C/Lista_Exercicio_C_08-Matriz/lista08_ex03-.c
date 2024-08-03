//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "21/12/2021"
/*	Objetivo: calcule e informe a somatória dos elementos da diagonal principal. 
A diagonal principal é traçada do canto superior esquerdo para o canto inferior direito.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define LIN 3
#define COL 3

int main(void){
setlocale(LC_ALL,"Portuguese");
//Declarações
	int m[LIN][COL];
	int l, c, soma;

//Instruções
	//printf("");
	//scanf("%",&);
	
	//LEITURA E SOMA
	for(l=0;l<LIN;l++){
		for(c=0;c<COL;c++){
			printf("Linha %d Coluna %d: ",l+1,c+1);
			scanf("%d",&m[l][c]);
		}
		soma += m[l][l];
		printf("\n");
	}
	//MATRIZ
	for(l=0; l<LIN; l++){
		for(c=0; c<COL; c++){
			printf("[%d]",m[l][c]);
		}
		printf("\n");
	}
	printf("\nA soma dos valores em diagonal: %d",soma);
	
	return 0;
}



// FIM *************************************************************************************************************************

