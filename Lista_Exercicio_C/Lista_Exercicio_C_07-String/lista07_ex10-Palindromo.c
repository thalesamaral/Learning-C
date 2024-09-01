//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "19/12/2021"
/*	Objetivo:
10.Palíndromo é uma palavra, frase ou qualquer outra sequência de unidades (como uma 
cadeia de DNA; Enzima de restrição) que tenha a propriedade de poder ser lida tanto da 
direita para a esquerda como da esquerda para a direita. Num palíndromo, normalmente são 
desconsiderados os sinais ortográficos (diacríticos ou de pontuação) 
(http://pt.wikipedia.org/wiki/Palíndromo). Faça um programa em C que receba um texto e 
informe se é ou não palíndromo. Despreze espaços em branco e considere que não será 
utilizado pontuação ou acentuação. Exemplos: aba, radar, reter, rever, rir, rotor, ovo, arara, 
“anotaram a data da maratona”
*/
#include <stdio.h>
#include <string.h>
#define TAM 100

//Protótipo de função
int palindromo(char[]);

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	char texto[] = "anotaram a data da maratona";

//Instruções
	/*
	printf("Digite um texto: ");
	fgets(texto, TAM, stdin);
	texto[strlen(texto)-1] = '\0'; //Ignora as casas não utilizadas
	*/
	
	if(palindromo(texto)){
		printf("\nPalindromo\n");
	}else{
		printf("\nNao Palindromo\n");
	}
	
	return 0;
}

int palindromo(char str[]){
	int ini, fim=strlen(str)-1;

	while(ini < fim){
		if(str[ini] == ' '){
			ini++;
		}else{
			if(str[fim] == ' ')
				fim--;
			else{
				if(str[ini] != str[fim]){
					return 0;
				}
				ini++;
				fim--;
			}
		}
	}
	
	return 1;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************
