//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "04/08/2022"
/*	Objetivo:
Imagine a seguinte situação: Desconta-se inicialmente 10% do salário bruto do trabalhador como contribuição à previdência social.
Após esse desconto, há outro desconto de 5% sobre o valor restante do salário bruto a título de um determinado imposto.
Faça um programa em C que leia o salário bruto de um cidadão e apresente o seu salário líquido.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
//Declarações
	float salarioBruto;
//Instruções
	//printf("");
	//scanf("%",&);
	
	printf("Digite seu salario bruto: ");
	scanf("%f",&salarioBruto);
	
	printf("\nPrimeiro desconto: %.4f\n", (salarioBruto * 0.10));
		salarioBruto -= salarioBruto * 0.10;
	printf("Salario com 1o Imposto: %.4f\n",salarioBruto);
	printf("Segundo desconto: %.4f\n", (salarioBruto * 0.05));
		salarioBruto -= salarioBruto * 0.05;
	printf("Salario com 2o Imposto: %.4f\n",salarioBruto);
	//system("pause");
	return 0;
}



// FIM *************************************************************************************************************************

