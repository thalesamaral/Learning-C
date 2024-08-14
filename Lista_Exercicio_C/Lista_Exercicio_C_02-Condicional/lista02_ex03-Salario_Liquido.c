//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "03/08/2024"
/*	Objetivo:
Faça um programa em C que receba o salário bruto de um funcionário, calcule e imprima o 
seu salário líquido utilizando a seguinte regra:
• Salário bruto inferior, ou igual a, R$ 1.200,00, o desconto é de 11%;
• Salário bruto superior a R$ 1.200,00, o desconto é de 11% sobre R$ 1.200,00 mais 
20% sobre o valor excedente a R$ 1.200,00. Por exemplo, se o funcionário recebe 
R$ 2.000,00, o valor arrecadado será de 11% sobre 1.200 e 20% sobre 800.
*/
#include<stdio.h>
#define Limite_Bruto 1200
#define Desconto_Abaixo_Limite 0.89 //11% aplicado
#define Desconto_Acima_Limite 0.8 //20% aplicado

int main(void){
//Declarações
	float salBruto;
	float salLiquido=0;
	float valorExcedente;
	
//Instruções
	printf("Informe o Salario bruto: ");
	scanf("%f",&salBruto);
	
	if(salBruto <= Limite_Bruto){
		salLiquido = salBruto * Desconto_Abaixo_Limite;
	}else{
		valorExcedente = salBruto - Limite_Bruto;
		salLiquido = (Limite_Bruto * Desconto_Abaixo_Limite) + (valorExcedente * Desconto_Acima_Limite);
	}
	
	printf("\nSalario Bruto: %.2f\n",salBruto);
	printf("Salario Liquido: %.2f\n",salLiquido);
	
	return 0;
}

