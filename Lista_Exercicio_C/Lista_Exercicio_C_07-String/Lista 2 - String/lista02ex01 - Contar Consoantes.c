// Sintese
// Objetivo: Faça um programa em C que receba uma frase do usuário e apresente a quantidade de consoantes.
// Autor: Thales Amaral Lima
// Data: 13/08/2020
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char frase[100];
	int i, cont = 0;

    printf("Digite uma frase\n");
	fgets(frase, 100, stdin);

		for(i=0; i<strlen(frase)-1; i++){
			if((frase[i] != 'a')&&(frase[i] != 'e')&&(frase[i] != 'i')&&(frase[i] != 'o')&&(frase[i] != 'u'))
				cont++;
		}
		
	printf("\nNumero de Consoantes: %i \n", cont);
    
}

