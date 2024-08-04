//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "01/12/2021"
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
	do{
		printf("Informe o sexo [M]ou[F]: ");
		sexo = getche();
		sexo = toupper(sexo);
		
		if(sexo=='M')
			printf("\nMasculino");
		else if(sexo=='F')
			printf("\nFeminino");
		else
			printf("\n\nOpcao invalida, digite novamente!\n\n");
	}while((sexo != 'M') && (sexo != 'F'));
	
	return 0;
}

