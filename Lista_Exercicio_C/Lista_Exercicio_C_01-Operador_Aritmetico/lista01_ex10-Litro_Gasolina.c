//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "01/12/2021"
/*	Objetivo:
Faça um programa em C que receba o preço do litro da gasolina e o valor que o motorista 
deseja abastecer, calcule e imprima a quantidade de litros correspondente a este valor.
*/
#include<stdio.h>
#include<stdlib.h>

int main(void){
//Declarações
	float precoLgasolina;
	float pagamento;
	
//Instruções
	printf("\nPreco do litro da gasolina: ");
	scanf("%f",&precoLgasolina);
	
	printf("Quantos reais deseja pagar: ");
	scanf("%f",&pagamento);
	
	printf("Voce recebera %.4f Litros\n",pagamento/precoLgasolina);
	
	return 0;
}

