//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "22/12/2021"
/*	Objetivo: Informe quantos elementos pares e ímpares existem na matriz.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define LIN 5
#define COL 2

int main(void){
setlocale(LC_ALL,"Portuguese");
//Declarações
	int m[LIN][COL];
	int l, c, par, impar;

//Instruções
	//printf("");
	//scanf("%",&);
	
	//LEITURA E VERIFICA PAR_ÍMPAR
	for(l=0;l<LIN;l++){
		for(c=0;c<COL;c++){
			printf("Linha %d Coluna %d: ",l+1,c+1);
			scanf("%d",&m[l][c]);
			if(m[l][c] %2 == 0)
				par++;
			else
				impar++;
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
	
	printf("\nPares: %d - Ímpares: %d",par,impar);
	
	return 0;
}

// FIM *************************************************************************************************************************

