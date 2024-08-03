//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "02/12/2021"
/*	Objetivo: */
//  Entrada.: salário base; peças.
//  Saída...: adicional salarial de produtividade.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	float salario=1050;
	int pecas;
	
//Instruções
	//printf("");
	//scanf("%",&);
	
	printf("Salário Base %.2fR$\n\n",salario);
	printf("Número de peças fabricadas no mês: ");
	scanf("%d",&pecas);
	
	if(pecas <= 500)
		printf("\nVocê receberá o Salário Base: 1050,00 R$");
	else if(pecas <= 750){
		salario += (pecas-500)*0.50;
		printf("\nVocê receberá: %.2fR$",salario);
	}else{
		salario = 1180;
		salario += (pecas-750)*0.75;
		printf("\nVocê receberá: %.2fR$",salario);
	}
	
	return 0;
}

