//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "18/12/2021"
/*	Objetivo: receba um texto, converta todos os caracteres deste para mai�sculo e 
apresente o texto ap�s convertido. Observa��o: o c�digo ASCII da letra �a� (min�sculo) � 97 e o c�digo da 
letra �A� (mai�sculo) � 65, o c�digo da letra �z� � 122 e o c�digo da letra �Z� � 90. N�o utilize nenhuma fun��o 
al�m das vistas na aula.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 15

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	char text[TAM];
	int i, posiMinusc;

//Instruções
	printf("Digite um texto: ");
	scanf("%s",&text);
	
	printf("Antes: %s",text);
	
	for(i=0; i<strlen(text); i++){
		if(text[i] >= 97 && text[i] <= 122){
			posiMinusc = text[i] - 96;
			text[i] = 64 + posiMinusc;
			//printf("%c\n",text[i]);
		}
	}
	
	printf("\nDepois: %s",text);
	
	return 0;
}
// FIM *************************************************************************************************************************

