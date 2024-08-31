//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "18/12/2021"
/*	Objetivo: receba 2 textos, concatene-os e apresente o texto concatenado. Exemplo: 
primeiro = "Bom dia, " e segundo = "mo�ada!", ent�o concatenado = "Bom dia, mo�ada!".*/
//  Entrada.:
//  Sa�da...:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 15

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	char text1[TAM], text2[TAM];

//Instruções
	printf("Digite uma palavra: ");
	gets(text1);
	printf("Digite a segunda..: ");
	gets(text2);
	
	printf("%s",strcat(text1, text2));
	
	return 0;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************
