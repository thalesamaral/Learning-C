// Sintese
// Objetivo: Faça um programa em C que receba um nome completo do usuário e apresente as iniciais deste nome. Exemplo: José Pereira Silva = JPS.
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
	
    for(i=0; frase[i] != '\0'; i++){
    	if(i == 0)
    		printf("%c. ",frase[i]);
        if(frase[i]==' ') 
    		printf("%c. ",frase[i+1]);
    }
	
    return 0;
}
