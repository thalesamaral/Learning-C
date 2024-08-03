//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "18/12/2021"
/*	Objetivo: receba um texto e informe a quantidade de consoantes.*/
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
	int i, consoante=0;
	
//Instruções
	//printf("");
	//scanf("%",&);
	
	printf("Digite um texto: ");
	gets(text);
	
	for(i=0; i<strlen(text); i++){
		if((text[i]!='a') && (text[i]!='e') && (text[i]!='i') && (text[i]!='o') && (text[i]!='u'))
			consoante++;	
	}
	
	printf("\nQuantidade de consoantes: %d",consoante);
	return 0;
}



// FIM ***************************************************************************************************************************

