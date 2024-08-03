//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "30/11/2021"
/*  Objetivo:
Faça um programa em C que leia uma temperatura em graus Celsius e a transforme em Farenheit.
Considere a fórmula: Farenheit = ((Celsius * 9) / 5) + 32.
*/
#include<stdio.h>
#include<stdlib.h>

int main(void){
//Declarações
	float celsius;
	float farenheit;
//Instruções
	printf("Transformar Celsius em Farenheit\n\n");
	printf("Digite os graus Celsius: ");
	scanf("%f", &celsius);
	
	farenheit = ((celsius*9)/5) + 32;
	printf("\nCelsius: %.1f = Farenheit: %.1f",celsius, farenheit);
	return 0;
}

