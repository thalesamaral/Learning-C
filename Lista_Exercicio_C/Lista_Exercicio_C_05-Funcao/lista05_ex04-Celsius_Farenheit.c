//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "10/12/2021"
/*	Objetivo: celsiusFarenheit*/
#include<stdio.h>
#include<stdlib.h>
#define TAM

//Protótipo de Função
float celsiusFarenheit(float);
float valida_numero();

int main(void){
//Declarações
	float celsius=0, farenheit;
	
//Instruções
	
	celsius = valida_numero();
	while(celsius){
		farenheit = celsiusFarenheit(celsius);
		printf("\nOs graus em Farenheit: %.2f\n\n",farenheit);

		celsius = valida_numero();
	}
	
	return 0;
}

float valida_numero(){
	float celsius;
	
	printf("Digite 999 para finalizar!\n");
	printf("Digite os graus Celsius: ");
	scanf("%f",&celsius);
	
	if(celsius == 999){
		return 0;
	}else{
		return celsius;
	}
}

float celsiusFarenheit(float cel){
	float farenheit;
	
	farenheit = ((cel * 9) / 5) + 32;
	
	return farenheit;
}

