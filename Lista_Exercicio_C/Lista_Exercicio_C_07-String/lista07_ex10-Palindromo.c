//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "19/12/2021"
/*	Objetivo: receba um texto e informe se é ou não palíndromo. Despreze espaços em branco e considere que não 
será utilizado pontuação ou acentuação. Exemplos: aba, radar, reter, rever, rir, rotor, ovo, arara, “anotaram a 
data da maratona”.*/
//  Entrada.:
//  Saída...:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <locale.h>
#define TAM 30

int palindromo(char[]);

int main(void){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	char text[TAM];

//Instruções
	//printf("");
	//scanf("%",&);

	printf("Digite um texto: ");
	gets(text);
	
	if(palindromo(text))
		printf("\nPalíndromo");
	else
		printf("\nNão Palíndromo");
	
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

// FIM *************************************************************************************************************************

