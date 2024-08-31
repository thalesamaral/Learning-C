//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "31/08/2024"
/*	Objetivo:
5. Faça um programa em C que receba um nome completo do usuário e apresente este nome 
no formato para referencial bibliográfico (Sobrenome + virgula + iniciais do nome + ponto) 
as iniciais deste nome. Exemplo: José Pereira Silva = Silva, J. P.
*/
#include <stdio.h>
#include <string.h>
#define TAM 55

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	char texto[] = "José Pereira Silva", iniciais[TAM], txtFinal[TAM];
	int i, j=0, tamanhoTexto;

//Instruções
	printf("Digite Nome completo: ");
	fgets(texto, TAM, stdin);
	tamanhoTexto = strlen(texto);
	texto[tamanhoTexto-1] = '\0'; //Ignora as casas não utilizadas
	puts(texto);
	
	/*
	for(i=0; i<tamanhoTexto; i++){
		if(i == 0){
			iniciais[j++] = texto[i];
		}else{
			if((texto[i] == ' ') && (texto[i+1] != '\0')){
				iniciais[j++] = texto[i+1];
			}
		}
	}
	*/

	for(i=tamanhoTexto; i>=0; i--){

		if(i == 0){
			iniciais[j++] = texto[i];
		}else{
			if((texto[i] == ' ') && (texto[i+1] != '\0')){
				iniciais[j++] = texto[i+1];
			}
		}
	}

	printf("\nIniciais do Nome completo\n");
	printf("%s ",iniciais); //puts(iniciais);
	
	return 0;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************
