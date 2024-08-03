//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "30/11/2021"
/*	Objetivo:
Faça um programa em C que receba o valor do quilo de um restaurante e o peso do prato do cliente, calcule e imprima o valor a ser pago.
*/
#include<stdio.h>
#include<stdlib.h>

int main(void){
//Declarações
	float valorKg;
	float quilo;
	float valorFinal;
	
//Instruções
	printf("Valor de 1Kg em reais: ");
	scanf("%f", &valorKg);
	
	printf("\nKg do prato: ");
	scanf("%f", &quilo);
	
	valorFinal = valorKg * quilo;
	printf("\nValor a ser pago %.2f reais",valorFinal);
	
	return 0;
}

