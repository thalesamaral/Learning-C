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
	char text[TAM], iniciais[TAM];
	int i, j=0;

//Instruções
	printf("Digite Nome completo: ");
	gets(text);
	
	for(i=0; i<strlen(text); i++){
		if(i == 0)
			iniciais[j] = text[i];
		else 
			if((text[i] == ' ') && (text[i+1] != '\0'))
				iniciais[j] = text[i+1];
		j++;
	}
	i=0;
	printf("Iniciais do Nome completo\n");
	for(i=0; i<strlen(iniciais); i++){
		printf("%c",iniciais[i]);
		
	}
	
	//printf("%s ",iniciais);
		
	//printf("Iniciais do Nome completo:");
	puts(iniciais);
	
	return 0;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************
