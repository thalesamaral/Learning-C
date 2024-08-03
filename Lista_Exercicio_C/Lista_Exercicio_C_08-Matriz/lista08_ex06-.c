//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "22/12/2021"
/*	Objetivo: receba e some todos os elementos de uma matriz de ordem definida pelo 
usuário, sendo no máximo 100x100.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define LIN 2
#define COL 2

int main(void){
setlocale(LC_ALL,"Portuguese");
//Declarações
	int m[100][100];
	int l, c, linha, coluna, soma=0;

//Instruções
	//printf("");
	//scanf("%",&);
	do{
		printf("Digite a quantidade de Linhas: ");
		scanf("%d",&linha);
	}while(linha>100);
	
	do{
		printf("Digite a quantidade de Coluna: ");
		scanf("%d",&coluna);
	}while(coluna>100);
	
	//LEITURA
	for(l=0;l<linha;l++){
		printf("\n");
		for(c=0;c<coluna;c++){
			printf("Linha %d Coluna %d: ",l+1,c+1);
			scanf("%d",&m[l][c]);
			soma+=m[l][c];
		}
		
	}
	
	//MATRIZ
	for(l=0; l<linha; l++){
		printf("\n");
		for(c=0; c<coluna; c++){
			printf("[%d]",m[l][c]);
		}
		
	}
	printf("\n\nSoma: %d",soma);
	
	return 0;
}

// FIM *************************************************************************************************************************

