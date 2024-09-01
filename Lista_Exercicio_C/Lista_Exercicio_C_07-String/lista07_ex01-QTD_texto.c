//  Síntese
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
	char texto[TAM];
	int i, tamanhoTexto, qtdConsoante=0, qtdPalavra=0;
	
//Instruções
	//setbuf(stdin, 0); fflush(stdin);
	printf("Digite um texto: ");
	fgets(texto, TAM, stdin);
	texto[strlen(texto)-1] = '\0'; //Limpa as casas não utilizadas
	puts(texto);

	// #1
	tamanhoTexto = strlen(texto);
	printf("Quantidade de caractertes: %d",tamanhoTexto);
	
	// #2
	for(i=0; i<tamanhoTexto; i++){
		if((texto[i]!='a') && (texto[i]!='e') && (texto[i]!='i') && (texto[i]!='o') && (texto[i]!='u') && (texto[i]!=' ')){
			qtdConsoante++;
		}
	}
	printf("\nQuantidade de consoantes: %d",qtdConsoante);

	// #3
	for(i=0; i<tamanhoTexto; i++){
		if((texto[i] == ' ') && (texto[i+1] != '\0')){
			qtdPalavra++;
		}else if(texto[i+1] == '\0'){
			qtdPalavra++;
		}
	}
	printf("\nQuantidade de palavras: %d\n",qtdPalavra);
	
	return 0;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************
