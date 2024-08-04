//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "01/12/2021"
/*	Objetivo:
Considere que em uma banca de feira, as maçãs custam R$ 1,30/cada, mas se for comprado 
a partir de uma dúzia, baixam para R$ 1,00/cada. Faça um programa em C que receba o 
número de maçãs compradas, calcule e imprim1a o custo total da compra.
*/
#include<stdio.h>
#include<stdlib.h>

int main(void){
//Declarações
	int numApple;
	float custoTotal;
	
//Instruções
	printf("Quantas macas deseja comprar?\n");
	scanf("%d",&numApple);
	
	if(numApple < 12)
		custoTotal += 1.30*numApple;
	else
		custoTotal += 1*numApple;
		
	printf("\nO custo total de compra foi: %.2f",custoTotal);
	
	return 0;
}

