//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "31/08/2024"
/*	Objetivo:
4. Faça um programa em C que receba um nome completo e apresente as iniciais. Exemplo: 
José Pereira Silva = JPS.
*/
#include <stdio.h>
#include <string.h>
#define TAM 25

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	char texto[TAM], iniciais[TAM];
	int i, j=0;

//Instruções
	printf("Digite Nome completo: ");
	fgets(texto, TAM, stdin);
	texto[strlen(texto)-1] = '\0'; //Ignora as casas não utilizadas
	puts(texto);
	
	for(i=0; i<strlen(texto); i++){
		if(i == 0){
			iniciais[j++] = texto[i];
		}else{
			if((texto[i] == ' ') && (texto[i+1] != '\0')){
				iniciais[j++] = texto[i+1];
			}
		}
	}

	printf("\nIniciais do Nome completo\n");
	for(i=0; i<strlen(iniciais); i++){
		printf("%c",iniciais[i]);
		
	}
	
	//printf("%s ",iniciais);
		
	//printf("Iniciais do Nome completo:");
	//puts(iniciais);
	
	return 0;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************
