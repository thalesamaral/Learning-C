//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "18/12/2021"
/*	Objetivo: receba um texto e informe a quantidade de caracteres.*/
//  Entrada.:
//  Sa�da...:
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
	
//Instru��es
	//printf("");
	//scanf("%",&);
	
	printf("Digite um texto: ");
	gets(text);
	
	printf("Quantidade de caractertes: %d",strlen(text));
	
	return 0;
}


// FIM ***************************************************************************************************************************
