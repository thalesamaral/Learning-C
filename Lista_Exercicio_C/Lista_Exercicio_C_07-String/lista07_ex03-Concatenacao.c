//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "31/08/2024"
/*	Objetivo:
3. Faça um programa em C que receba 2 textos, concatene-os e apresente o texto concatenado.
Exemplo: primeiro = "Bom dia, " e segundo = "moçada!", então concatenado = "Bom dia, moçada!".
*/
#include <stdio.h>
#include <string.h>
#define TAM 15

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	char texto1[TAM], texto2[TAM];

//Instruções
	printf("Digite o texto 1: ");
	fgets(texto1, TAM, stdin);
	texto1[strlen(texto1)-1] = '\0'; //Limpa as casas não utilizadas
	puts(texto1);

	printf("Digite o texto 2: ");
	fgets(texto2, TAM, stdin);
	texto2[strlen(texto2)-1] = '\0'; //Limpa as casas não utilizadas
	puts(texto2);
	
	puts("\nConcatenacao");
	printf("%s",strcat(texto1, texto2));
	
	return 0;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************
