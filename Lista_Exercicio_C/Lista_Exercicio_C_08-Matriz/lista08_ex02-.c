//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "21/12/2021"
/*	Objetivo: receba (o valor de todos os elementos) uma matriz numérica de 5x3 (linha x 
coluna) e informe a posição (linha e coluna) do maior elemento da matriz.*/
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
	int l, c, maior=0, linha=0, coluna=0;

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
	
	//VERIFICA MAIOR VALOR
	for(l=0; l<LIN; l++){
		for(c=0; c<COL; c++){
			if(m[l][c] > maior){
				maior = m[l][c];
				linha = l+1;
				coluna = c+1;
			}
		}
	}
	
	//MATRIZ
	for(l=0; l<LIN; l++){
		for(c=0; c<COL; c++){
			printf("[%d]",m[l][c]);
		}
		printf("\n");
	}
	
	printf("O maior valor é: %d\n",maior);
	printf("Da linha %d coluna %d",linha,coluna);
	
	return 0;
}



// FIM *************************************************************************************************************************

