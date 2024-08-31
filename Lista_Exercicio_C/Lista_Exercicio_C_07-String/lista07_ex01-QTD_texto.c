//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "31/08/2024"
/*	Objetivo:
1. Faça um programa em C que receba um texto e informe a quantidade de caracteres, 
consoantes e conte a quantidade de palavras.
*/
#include <stdio.h>
#include <string.h>
#define TAM 25

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	char text[TAM];
	int i, tamanhoTexto, qtdConsoante=0, qtdPalavra=0;
	
//Instruções
	//setbuf(stdin, 0); fflush(stdin);
	printf("Digite um texto: ");
	//scanf("%s",text);
	fgets(text, 255, stdin);
	text[strlen(text)-1] = '\0';
	puts(text);

	// #1
	tamanhoTexto = strlen(text);
	printf("Quantidade de caractertes: %d",tamanhoTexto);

	// #2
	for(i=0; i<tamanhoTexto; i++){
		if((text[i]!='a') && (text[i]!='e') && (text[i]!='i') && (text[i]!='o') && (text[i]!='u') && (text[i]!=' ')){
			qtdConsoante++;
		}
	}
	printf("\nQuantidade de consoantes: %d",qtdConsoante);

	// #3
	for(i=0; i<tamanhoTexto; i++){
		if((text[i] == ' ') && (text[i+1] != '\0')){
			qtdPalavra++;
		}else if(text[i+1] == '\0'){
			qtdPalavra++;
		}
	}
	printf("\nQuantidade de palavras: %d\n",qtdPalavra);
	
	return 0;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************
