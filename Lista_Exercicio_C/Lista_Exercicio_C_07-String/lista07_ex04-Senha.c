//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "18/12/2021"
/*	Objetivo: receba uma senha e verifique se est� correta. A senha correta deve ser �pipoca�.*/
//  Entrada.:
//  Sa�da...:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <locale.h>
#define TAM 15
main(){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	char text[TAM];
	
//Instru��es
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

