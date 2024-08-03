//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "22/12/2021"
/*	Objetivo: somar o elemento da 1ª linha e 1ª coluna com o elemento da 2ª linha e 1ª coluna
 e armazenar na 3ª linha e 1ª coluna. Fazer o mesmo para as demais colunas da 3ª linha.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define LIN 3
#define COL 4

int main(void){
setlocale(LC_ALL,"Portuguese");
//Declarações
	int m[LIN][COL] = {0};
	int l, c, soma;

//Instruções
	//printf("");
	//scanf("%",&);
	
	//LEITURA
	for(l=0;l<LIN-1;l++){
		for(c=0;c<COL;c++){
			printf("Linha %d Coluna %d: ",l+1,c+1);
			scanf("%d",&m[l][c]);
		}
		printf("\n");
	}
	
	printf("Antes\n");
	for(l=0; l<LIN; l++){
		for(c=0; c<COL; c++){
			printf("[%d]",m[l][c]);
		}
		printf("\n");
	}
	
	for(c=0; c<COL; c++){
		for(l=0; l<LIN; l++){
			if(l<LIN-1)
				soma += m[l][c];
			else
				if(l==LIN-1)
					m[l][c] = soma;
		}
		soma=0;
	}
	
	printf("\nDepois\n");
	for(l=0; l<LIN; l++){
		for(c=0; c<COL; c++){
			printf("[%d]",m[l][c]);
		}
		printf("\n");
	}
	
	
	return 0;
}


// FIM *************************************************************************************************************************

