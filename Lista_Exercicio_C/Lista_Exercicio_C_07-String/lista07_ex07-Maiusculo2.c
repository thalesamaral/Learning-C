//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "18/12/2021"
/*	Objetivo: receba um texto, converta todos os caracteres deste para maiúsculo e 
apresente o texto após convertido. Observação: o código ASCII da letra ‘a’ (minúsculo) é 97 e o código da 
letra ‘A’ (maiúsculo) é 65, o código da letra ‘z’ é 122 e o código da letra ‘Z’ é 90. Não utilize nenhuma função 
além das vistas na aula.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <locale.h>
#define TAM 15
main(){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	char text[TAM];
	int i, posiMinusc;

//Instruções
	//printf("");
	//scanf("%",&);

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

