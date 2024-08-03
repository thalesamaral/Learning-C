//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "22/12/2021"
/*	Objetivo: receba uma matriz de caracteres (cada elemento é um char) de 5x3 (linha x 
coluna) e também receba um caractere. Seu programa deve verificar e informar se o caractere aparece 
dentro da matriz. Apenas sim ou não.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define LIN 2
#define COL 2

int main(void){
setlocale(LC_ALL,"Portuguese");
//Declarações
	char m[LIN][COL], letra;
	int l, c, flag=0;

//Instruções
	//printf("");
	//scanf("%",&);
	
	printf("Informe um caracter: ");
	scanf("%c",&letra);
	
	//LEITURA
	for(l=0;l<LIN;l++){
		for(c=0;c<COL;c++){
			printf("Linha %d Coluna %d: ",l+1,c+1);
			fflush(stdin);
			scanf("%c",&m[l][c]);
			if(m[l][c] == letra)
				flag=1;
		}
		printf("\n");
	}
	
	if(flag)
		printf("\nApareceu\n");
	else
		printf("Não apareceu\n");
	
	return 0;
}



// FIM *************************************************************************************************************************

