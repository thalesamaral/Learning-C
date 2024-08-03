// Sintese
// Objetivo: Faça um programa em C que receba uma frase do usuário, conte e apresente a quantidade de palavras.
// Autor: Thales Amaral Lima
// Data: 18/08/2020
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char frase[50];
    int i, c, conta=0;

	printf("Digite uma frase\n");
    fgets(frase, 150, stdin);
	
    for(i=0; frase[i] != '\0'; i++)
        if(frase[i]==' ') 
    		conta++;
    		
	printf(" %d",conta+1);
	
    return 0;
}
