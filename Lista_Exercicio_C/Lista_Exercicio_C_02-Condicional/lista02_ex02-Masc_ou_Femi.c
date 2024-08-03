//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "03/08/2024"
/*	Objetivo:
Faça um programa em C que receba o sexo de uma pessoa, informado como "m" ou "f", 
verifique e imprima por extenso: masculino ou feminino.
Senão, imprima uma mensagem informando que o valor digitado está incorreto.
*/
#include<stdio.h>
#include<stdlib.h>

int main(void){
//Declarações
	char sexo;
	
//Instruções
	printf("Digite [M] para Masculino\n");
	printf("Digite [F] para Feminino\n");
	printf("Informe sua opcao: ");
	scanf("%c", &sexo);
	
	if(sexo=='M')
		printf("\nMasculino\n");
	else if(sexo=='F')
		printf("\nFeminino\n");
	else
		printf("\n\nOpcao invalida!\n\n");
	
	return 0;
}

