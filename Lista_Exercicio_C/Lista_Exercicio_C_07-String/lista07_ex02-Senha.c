//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "31/08/2024"
/*	Objetivo:
2. Faça um programa em C que receba uma senha e verifique se está correta. A senha correta 
deve ser “pipoca”.
*/
#include <stdio.h>
#include <string.h>
#define TAM 8 // 7 == pipoca + /0

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	char texto[TAM];
	
//Instruções
	printf("Digite um texto: ");
	fgets(texto, TAM, stdin);
	puts(texto);
	
	if(strcmp(texto, "pipoca") == 0){
		printf("\nSenha correta\n");
	}else{
		printf("\nSenha incorreta\n");
	}
	
	return 0;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************
