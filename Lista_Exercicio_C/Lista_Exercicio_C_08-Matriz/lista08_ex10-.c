//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "25/12/2021"
/*	Objetivo: Jogo-da-velha. Faça um programa em C que receba os valores (X ou O) de uma matriz de caracteres de 3x3 
que representa um tabuleiro de jogo-da-velha. Seu programa deve verificar e informar se alguém (X ou O)
ganhou ou se “deu velha”.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void verificaMatriz(char [3][3]);
int verificaVencedor(char [3][3], char);

int main(void){
setlocale(LC_ALL,"Portuguese");
//Declarações
	char matriz[3][3] = {' '}, valorChar;
	int l, c, rodada=1;

//Instruções
	//printf("");
	//scanf("%",&);
	
	verificaMatriz(matriz);
	
	do{
		if(rodada%2 == 0)
			valorChar = 'X';
		else
			valorChar = 'O';
		
		printf("\nQual posição deseja jogar\n");
		printf("LINHA: ");
		scanf("%d",&l);
		printf("COLUNA: ");
		scanf("%d",&c);
		
		matriz[l-1][c-1] = valorChar;

		system("cls");
		
		verificaMatriz(matriz);
		
		rodada++;
	}while((rodada<10) && (!verificaVencedor(matriz, valorChar)));
		
	if(verificaVencedor(matriz, 'X'))
		printf("\nVencedor = X");
	else
		if(verificaVencedor(matriz, 'O'))
			printf("\nVencedor = O");
		else
			printf("\nDeu Velha!");
		
	//system("cls");
	
	return 0;
}

void verificaMatriz(char m[3][3]){
	
	printf("=========================\n");
	printf("------Jogo da velha------\n");
	printf("=========================\n\n");
	printf("      C O L U N A S\n");
	printf(" L     1   2   3\n");
	printf(" I  1  %c | %c | %c \n", m[0][0], m[0][1], m[0][2]);
	printf(" N    ---+---+---\n");
	printf(" H  2  %c | %c | %c \n", m[1][0], m[1][1], m[1][2]);
	printf(" A    ---+---+---\n");
	printf(" S  3  %c | %c | %c \n", m[2][0], m[2][1], m[2][2]);
	
}

int verificaVencedor(char m[3][3], char v){
	
	if((m[0][0] == v) && (m[0][1] == v) && (m[0][2] == v))
		return 1;
	if((m[1][0] == v) && (m[1][1] == v) && (m[1][2] == v))
		return 1;
	if((m[2][0] == v) && (m[2][1] == v) && (m[2][2] == v))
		return 1;
	
	if((m[0][0] == v) && (m[1][0] == v) && (m[2][0] == v))
		return 1;
	if((m[0][1] == v) && (m[1][1] == v) && (m[2][1] == v))
		return 1;
	if((m[0][2] == v) && (m[1][2] == v) && (m[2][2] == v))
		return 1;
		
	if((m[0][0] == v) && (m[1][1] == v) && (m[2][2] == v))
		return 1;
	if((m[0][2] == v) && (m[1][1] == v) && (m[2][0] == v))
		return 1;
	
	return 0;
}

// FIM *************************************************************************************************************************

