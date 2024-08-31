//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "31/08/2024"
/*	Objetivo:
1. Faça um programa em C que receba um texto e informe a quantidade de caracteres, 
consoantes e conte a quantidade de palavras.
*/
#include <stdio.h>
#include <string.h>
#define TAM 15

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	char text[TAM];
	int i;
	
//Instruções
	printf("Digite um texto: ");
	gets(text);
	
	printf("Quantidade de caractertes: %d",strlen(text));
	
	return 0;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************
