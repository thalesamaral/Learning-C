//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "30/11/2021"
/*  Objetivo: leia uma temperatura em graus Celsius e a transforme em Farenheit.
Considere a fórmula: Farenheit = ((Celsius * 9) / 5) + 32.
*/
#include<stdio.h>
#include<stdlib.h>

int main(void){
//Variaveis
	float celsius;
	float farenheit;
//Instruï¿½ï¿½es
	printf("Transformar Celsius em Farenheit\n\n");
	printf("Digite os graus Celsius: ");
	scanf("%f", &celsius);
	
//Farenheit
	farenheit = ((celsius*9)/5) + 32;
	printf("\nCelsius: %.1f = Farenheit: %.1f",celsius, farenheit);
	return 0;
}

