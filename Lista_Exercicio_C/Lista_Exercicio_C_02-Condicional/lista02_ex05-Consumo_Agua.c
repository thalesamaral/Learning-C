//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "01/12/2021"
/*	Objetivo: 
Considerando o cálculo do valor de uma conta de água, faça um programa em C que receba
o tipo de consumidor (residencial, comercial ou industrial) e seu consumo de água em metros
cúbicos. Calcule e imprima o valor de sua conta. O cálculo obedece as seguintes regras:
• Residencial: R$ 5,00 de taxa mais R$ 0,05 por m3 (metros cúbicos) gastos;
• Comercial: R$ 500,00 para os primeiros 80 m3 gastos mais R$ 0,03 por m3 gasto excedendo os 80 m3;
• Industrial: R$800,00 para os primeiros 100 m3 gastos mais R$ 0,04 por m3 gasto excedendo os 100 m3.
*/
#include<stdio.h>
#include<stdlib.h>

int main(void){
//Declarações
	float consumoM3;
	float valorConta;
	int tipoConsumidor;
	
//Instruções
	printf("Opcao [1] Residencial\n");
	printf("Opcao [2] Comercial\n");
	printf("Opcao [3] Industrial\n");
	printf("Qual o tipo de consumidor\n");
	scanf("%d",&tipoConsumidor);

	printf("\nQual o consumo de agua em metros cubicos: ");
	scanf("%f",&consumoM3);
	switch(tipoConsumidor){
		case 1:
			valorConta = 5 + consumoM3*0.05;
		break;
		case 2:
			valorConta = 500;
			if(consumoM3 > 80){
				valorConta += (consumoM3-80)*0.03;
			}
		break;
		case 3:
			valorConta = 800;
			if(consumoM3 > 100){
				valorConta += (consumoM3-100)*0.04;
			}
		break;
		default:
			printf("Tipo de consumidor invalido!");
		break;	
	}
	
	printf("\nO valor do consumo de agua foi: %.2f\n",valorConta);
	
	return 0;
}

