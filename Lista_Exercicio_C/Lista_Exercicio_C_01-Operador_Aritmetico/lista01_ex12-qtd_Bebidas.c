//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "03/08/2024"
/*	Objetivo:
Imagine a seguinte situação: uma marca de bebidas fornece seus produtos em lata de 350ml, 
garrafa de 600ml e garrafa de 2 litros.
Faça um programa em C que receba a quantidade comprada de cada tipo, calcule e imprima o total de litros comprados.
*/
#include<stdio.h>

int main(void){
//Declarações
	int qtdBebida;
	float litroTotal=0;
	
//Instruções
	printf("Quantidade da bebida de 350ml: ");
	scanf("%d",&qtdBebida);
		litroTotal += qtdBebida*0.350;
	printf("Quantidade da bebida de 600ml: ");
	scanf("%d",&qtdBebida);
		litroTotal += qtdBebida*0.600;
	printf("Quantidade da bebida de 2L: ");
	scanf("%d",&qtdBebida);
		litroTotal += qtdBebida*2;
	
	printf("\nQuantidade total em litros: %.4f", litroTotal);

	return 0;
}

