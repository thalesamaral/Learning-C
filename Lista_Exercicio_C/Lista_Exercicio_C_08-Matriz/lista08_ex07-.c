//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "22/12/2021"
/*	Objetivo: calcule e informe a soma dos elementos de suas linhas e a soma dos elementos de suas colunas.*/
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
	int l, c, somaL=0, somaC=0;

//Instruções
	//printf("");
	//scanf("%",&);
	
	//LEITURA
	for(l=0;l<LIN;l++){
		for(c=0;c<COL;c++){
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
	
	//Soma Linha
	for(l=0; l<LIN; l++){
		for(c=0; c<COL; c++){
			somaL += m[l][c];
		}
		printf("\nSoma %dª Linha: %d",l+1,somaL);
		somaL=0;
	}
	
	//Soma Coluna
	for(c=0; c<COL; c++){
		for(l=0; l<LIN; l++){
			somaC += m[l][c];
		}
		printf("\nSoma %dª Coluna: %d",c+1,somaC);
		somaC=0;
	}
	
	return 0;
}

// FIM *************************************************************************************************************************

