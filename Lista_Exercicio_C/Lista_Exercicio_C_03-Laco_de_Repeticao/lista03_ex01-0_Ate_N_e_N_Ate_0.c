//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "04/12/2021"
/*	Objetivo: Ao informar um número, imprimir de 0 até o valor
depois imprimir do valor até 0.*/
//  Entrada.: número positivo.
//  Saída...: contagem de zero até o número informado, depois regressivamente.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(void){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	int num;
	int i=0;
	
//Instruções
	//printf("");
	//scanf("%",&);
	
	do{
		printf("Digite um número positivo: ");
		scanf("%d",&num);	
	}while(num<0);
	
	do{
		printf("%d\n",i);
		i++;
	}while(i<=num);
	
	printf("\n");
	
	do{
		printf("%d\n",num);
		num--;
	}while(num>=0);
	
	return 0;
}

