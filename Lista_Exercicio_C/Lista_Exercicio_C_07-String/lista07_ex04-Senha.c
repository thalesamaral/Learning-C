//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "18/12/2021"
/*	Objetivo: receba uma senha e verifique se está correta. A senha correta deve ser “pipoca”.*/
//  Entrada.:
//  Saída...:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <locale.h>
#define TAM 15
main(){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	char text[TAM];
	
//Instruções
	//printf("");
	//scanf("%",&);
	
	printf("Digite um texto: ");
	gets(text);
	
	if(strcmp(text, "pipoca")== 0)
		printf("Senha correta");
	else
		printf("Senha incorreta");
	
	return 0;
}



// FIM ***************************************************************************************************************************

