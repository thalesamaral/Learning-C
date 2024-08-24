//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "24/08/2024"
/*	Objetivo: 
4. Faça um programa em C que contenha subprograma. É necessário que seu programa como 
um todo leia uma série de temperaturas em graus Celsius, somente terminando quando for 
digitado 999, e as transforme (cada uma delas) em Farenheit. Farenheit = ((Celsius * 9) / 5) 
+ 32.
*/
#include<stdio.h>

//Protótipo de Função
int valor_ou_fim(float*);
float celsius_farenheit(float);

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	float celsius, farenheit;

//Instruções
	printf("Digite os graus Celsius\n");
	printf("Ou, digite 999 para finalizar!\n");

	celsius=0;
	while(valor_ou_fim(&celsius)){
		farenheit = celsius_farenheit(celsius);
		printf("\nOs graus em Farenheit: %.2f\n\n",farenheit);
	};
	

	printf("\n\nFIM!\n\n");

	return 0;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************

int valor_ou_fim(float*celsius){
	float valor;

	printf("Insira o valor: ");
	scanf("%f",&valor);
	
	if(valor == 999){
		return 0;
	}else{
		*celsius = valor;
		return 1;
	}
}

float celsius_farenheit(float cel){
	float farenheit;
	
	farenheit = ((cel * 9) / 5) + 32;
	
	return farenheit;
}

