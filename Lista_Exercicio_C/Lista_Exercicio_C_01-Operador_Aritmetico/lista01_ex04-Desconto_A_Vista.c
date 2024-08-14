//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "03/08/2024"
/*	Objetivo:
Faça um programa em C que leia o valor de uma determinada mercadoria de uma loja.
Sabendo que o desconto para pagamento à vista é de 10% sobre o valor total, calcule o valor a ser pago à vista.
Escreva o valor total, o valor do desconto e o valor a ser pago à vista.
*/
#include<stdio.h>

int main(void){
//Declarações
	float valorMercadoria;
	
//Instruções
	printf("Informe o valor da mercadoria: ");
	scanf("%f", &valorMercadoria);
	printf("\nO desconto para pagamento a vista eh de 10%%!\n\n");

	printf("Valor da Mercadoria......: %.2f\n", valorMercadoria);
	printf("Valor do Desconto de 10%%.: %.2f\n", valorMercadoria * 0.10);
	printf("Valor A Vista............: %.2f\n", valorMercadoria * 0.90);

	return 0;
}

