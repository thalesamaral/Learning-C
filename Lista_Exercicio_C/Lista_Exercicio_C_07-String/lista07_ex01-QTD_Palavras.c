//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "18/12/2021"
/*	Objetivo: receba um texto e conte a quantidade de palavras.*/
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
	int i, words=1;
	
//Instruções
	//printf("");
	//scanf("%",&);
	
	printf("Digite um texto: ");
	gets(text);
	
	for(i=0; i<strlen(text); i++){
		if((text[i] == ' ') && (text[i+1] != '\0'))
			words++;
	}
	
	printf("\nQuantidade de palavras: %d",words);
	
	return 0;
}



// FIM ***************************************************************************************************************************

