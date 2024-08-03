//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "01/12/2021"
/*	Objetivo:
Faça um programa em C que receba a quantidade de moedas, calcule e imprima o valor 
total em reais. Considere moedas de 1, 5, 10, 25 e 50 centavos e moeda de 1 real.
*/
#include<stdio.h>
#include<stdlib.h>

int main(void){
//Declarações
	float valorTotal=0;
	int qntMoedas;
	
//Instruções
	printf("Quantidade de moedas de 1 centavo: ");
	scanf("%d",&qntMoedas);
		valorTotal += qntMoedas*0.01;
	printf("Quantidade de moedas de 5 centavos: ");
	scanf("%d",&qntMoedas);
		valorTotal += qntMoedas*0.05;
	printf("Quantidade de moedas de 10 centavos: ");
	scanf("%d",&qntMoedas);
		valorTotal += qntMoedas*0.10;
	printf("Quantidade de moedas de 25 centavos: ");
	scanf("%d",&qntMoedas);
		valorTotal += qntMoedas*0.25;
	printf("Quantidade de moedas de 50 centavos: ");
	scanf("%d",&qntMoedas);
		valorTotal += qntMoedas*0.50;
	printf("Quantidade de moedas de 1 real: ");
	scanf("%d",&qntMoedas);
		valorTotal += qntMoedas;
	
	printf("\nO valor em reais: %.2f", valorTotal);
	
	return 0;
}

