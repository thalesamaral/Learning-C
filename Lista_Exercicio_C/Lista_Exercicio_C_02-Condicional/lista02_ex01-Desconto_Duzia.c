//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "01/12/2021"
/*	Objetivo: */
//  Entrada.: Nº de maçãs compradas. 
//  Saída...: Custo total de compra.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	int numApple;
	float custoTotal;
	
//Instruções
	//printf("");
	//scanf("%",&);
	
	printf("Quantas maçãs deseja comprar?\n");
	scanf("%d",&numApple);
	
	if(numApple < 12)
		custoTotal += 1.30*numApple;
	else
		custoTotal += 1*numApple;
		
	printf("\nO custo total de compra foi: %.2f",custoTotal);
	
	return 0;
}

