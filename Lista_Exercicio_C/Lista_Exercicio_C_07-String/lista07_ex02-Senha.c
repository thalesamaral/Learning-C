//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "18/12/2021"
/*	Objetivo:
2. Faça um programa em C que receba uma senha e verifique se está correta. A senha correta 
deve ser “pipoca”.
*/
#include <stdio.h>
#include <string.h>
#define TAM 25

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	char texto[TAM];
	
//Instruções
	printf("Digite um texto: ");
	fgets(texto, TAM, stdin);
	texto[strlen(texto)-1] = '\0';
	puts(texto);
	
	if(strcmp(texto, "pipoca") == 0){
		printf("Senha correta");
	}else{
		printf("Senha incorreta");
	}
	
	return 0;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************
