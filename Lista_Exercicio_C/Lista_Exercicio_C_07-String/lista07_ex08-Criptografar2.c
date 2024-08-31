//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "19/12/2021"
/*	Objetivo: */
//  Entrada.:
//  Sa�da...:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 15

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	char text[TAM];
	int codigo;

//Instruções
	printf("Digite um texto: ");
	gets(text);
	
	printf("\nC�digo para criptografia: ");
	scanf("%d",&codigo);
	
	criptografar(text, codigo);
	printf("Texto criptografado: \n%s",text);
	
	return 0;
}

void criptografar(char str[], int cod){
	int i;
	
	for(i=0; i<strlen(str); i++){
		if((str[i] >= 32) && (str[i] <= 126))
			str[i] = (((str[i]-32)+cod) % 95) + 32;
	}
}

// FIM *************************************************************************************************************************

