//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "02/12/2021"
/*	Objetivo: */
//  Entrada.: sal�rio base; pe�as.
//  Sa�da...: adicional salarial de produtividade.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	float salario=1050;
	int pecas;
	
//Instru��es
	//printf("");
	//scanf("%",&);
	
	printf("Sal�rio Base %.2fR$\n\n",salario);
	printf("N�mero de pe�as fabricadas no m�s: ");
	scanf("%d",&pecas);
	
	if(pecas <= 500)
		printf("\nVoc� receber� o Sal�rio Base: 1050,00 R$");
	else if(pecas <= 750){
		salario += (pecas-500)*0.50;
		printf("\nVoc� receber�: %.2fR$",salario);
	}else{
		salario = 1180;
		salario += (pecas-750)*0.75;
		printf("\nVoc� receber�: %.2fR$",salario);
	}
	
	return 0;
}

