//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "19/12/2021"
/*	Objetivo: */
//  Entrada.:
//  Sa�da...:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <locale.h>
#define TAM 50
//Prot�tipo de fun��es
void criptografar(char[], int);

int main(void){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	char text[TAM];
	int codigo;

//Instru��es
	//printf("");
	//scanf("%",&);

	printf("Digite um texto: ");
	gets(text);
	
	printf("\nC�digo para criptografia: ");
	scanf("%d",&codigo);
	
	criptografar(text, codigo);
	printf("Texto criptografado: \n%s",text);
	
	return 0;
}

void criptografar(char str[], int cod){
	int i;
	
	for(i=0; i<strlen(str); i++){
		if((str[i] >= 32) && (str[i] <= 126))
			str[i] = (((str[i]-32)+cod) % 95) + 32;
	}
}

// FIM *************************************************************************************************************************

