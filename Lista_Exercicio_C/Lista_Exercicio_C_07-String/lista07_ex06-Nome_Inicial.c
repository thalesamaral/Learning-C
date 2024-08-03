//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "18/12/2021"
/*	Objetivo: receba um nome completo e apresente as iniciais. Exemplo: José Pereira Silva = JPS.*/
//  Entrada.:
//  Saída...:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <locale.h>
#define TAM 15
main(){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	char text[TAM];
	int i;

//Instruções
	//printf("");
	//scanf("%",&);

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
// FIM *************************************************************************************************************************

