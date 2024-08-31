//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "18/12/2021"
/*	Objetivo: receba um nome completo e apresente as iniciais. Exemplo: Jos� Pereira Silva = JPS.*/
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
	int i;

//Instruções
	printf("Digite Nome completo: ");
	gets(text);
	
	for(i=0; i<strlen(text); i++){
		if(i == 0)
			printf("%c ",text[i]);
		else 
			if((text[i] == ' ') && (text[i+1] != '\0'))
				printf("%c ",text[i+1]);
	}
	
	return 0;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************
