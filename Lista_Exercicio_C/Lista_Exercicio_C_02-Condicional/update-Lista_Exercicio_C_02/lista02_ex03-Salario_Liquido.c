//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "01/12/2021"
/*	Objetivo:
Faça um programa em C que receba o salário bruto de um funcionário, calcule e imprima o 
seu salário líquido utilizando a seguinte regra:
• Salário bruto inferior, ou igual a, R$ 1.200,00, o desconto é de 11%;
• Salário bruto superior a R$ 1.200,00, o desconto é de 11% sobre R$ 1.200,00 mais 
20% sobre o valor excedente a R$ 1.200,00. Por exemplo, se o funcionário recebe 
R$ 2.000,00, o valor arrecadado será de 11% sobre 1.200 e 20% sobre 800.
*/
#include<stdio.h>
#include<stdlib.h>

int main(void){
//Declarações
	float salBruto;
	float salLiquido;
	float valorExcedente;
	
//Instruções
	printf("Informe o Salario: ");
	scanf("%f",&salBruto);
	salLiquido = salBruto;
	
	if(salBruto<=1200)
		salLiquido -= (salBruto*11)/100;
	else{
		salLiquido -= (salBruto*11)/100;
		valorExcedente = salBruto - 1200;
		salLiquido -= (valorExcedente*20)/100;
	}
	
	printf("\nSalario Bruto: %.2f\n",salBruto);
	printf("Salario Liquido: %.2f\n",salLiquido);
	
	return 0;
}

