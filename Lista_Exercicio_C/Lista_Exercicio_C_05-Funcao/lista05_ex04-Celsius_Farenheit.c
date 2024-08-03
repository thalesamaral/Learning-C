//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "10/12/2021"
/*	Objetivo: celsiusFarenheit*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAM
//Protótipo de Função
float celsiusFarenheit(float);

int main(void){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	float celsius=0, farenheit;
	
//Instruções
	do{
		printf("Digite 999 para finalizar!\n");
		printf("Digite os graus Celsius: ");
		scanf("%f",&celsius);
		
		if(celsius != 999){
			farenheit = celsiusFarenheit(celsius);
			printf("\nOs graus em Farenheit: %.2f\n\n",farenheit);
		}
	}while(celsius != 999);
	
	return 0;
}

float celsiusFarenheit(float cel){
	float farenheit;
	
	farenheit = ((cel * 9) / 5) + 32;
	
	return farenheit;
}

