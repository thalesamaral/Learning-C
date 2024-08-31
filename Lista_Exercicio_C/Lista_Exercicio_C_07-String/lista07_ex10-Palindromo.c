//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "19/12/2021"
/*	Objetivo: receba um texto e informe se � ou n�o pal�ndromo. Despreze espa�os em branco e considere que n�o 
ser� utilizado pontua��o ou acentua��o. Exemplos: aba, radar, reter, rever, rir, rotor, ovo, arara, �anotaram a 
data da maratona�.*/
//  Entrada.:
//  Sa�da...:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 30

//Prototipo de funcoes
int palindromo(char[]);

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	char text[TAM];

//Instruções
	printf("Digite um texto: ");
	gets(text);
	
	if(palindromo(text))
		printf("\nPal�ndromo");
	else
		printf("\nN�o Pal�ndromo");
	
	return 0;
}

int palindromo(char str[]){
	int ini, fim=strlen(str)-1;
	
	while(ini < fim){
		if(str[ini] == ' ')
			ini++;
		else{
			if(str[fim] == ' ')
				fim--;
			else{
				if(str[ini] != str[fim])
					return 0;
				ini++;
				fim--;
			}
		}
	}
	return 1;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************
