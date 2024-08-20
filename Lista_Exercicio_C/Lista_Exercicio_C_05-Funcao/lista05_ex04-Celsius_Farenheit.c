//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "19/08/2024"
/*	Objetivo: 
4. Faça um programa em C que contenha subprograma. É necessário que seu programa como 
um todo leia uma série de temperaturas em graus Celsius, somente terminando quando for 
digitado 999, e as transforme (cada uma delas) em Farenheit. Farenheit = ((Celsius * 9) / 5) 
+ 32.
*/
#include<stdio.h>

//Protótipo de Função
void ler_temperatura();
float celsius_farenheit(float);

int main(void){
//Instruções

	ler_temperatura();
	return 0;
}

void ler_temperatura(){
	float celsius, farenheit;
	
	do{
		printf("Digite 999 para finalizar!\n");
		printf("Digite os graus Celsius: ");
		scanf("%f",&celsius);
		
		if(celsius != 999){
			farenheit = celsius_farenheit(celsius);
			printf("\nOs graus em Farenheit: %.2f\n\n",farenheit);
		}
	}while(celsius != 999);

	printf("\n\nFIM!\n\n");
}

float celsius_farenheit(float cel){
	float farenheit;
	
	farenheit = ((cel * 9) / 5) + 32;
	
	return farenheit;
}

