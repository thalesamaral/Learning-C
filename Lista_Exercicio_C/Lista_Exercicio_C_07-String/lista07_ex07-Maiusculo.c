//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "19/12/2021"
/*	Objetivo: */
//  Entrada.:
//  Sa�da...:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 50

void maiusculo(char[]);

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	char text[TAM];

//Instruções
	printf("Digite um texto: ");
	gets(text);
	
	maiusculo(text);
	printf("Texto em maiusculo: %s",text);
	
	return 0;
}

void maiusculo(char str[]){
	int i;
	
	for(i=0; i<strlen(str); i++)
		if((str[i] >= 'a') && (str[i] <= 'z'))
			str[i] -= 32;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************
