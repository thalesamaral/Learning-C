//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "04/08/2022"
/*	Objetivo: Imagine a seguinte situa��o: Desconta-se inicialmente 10% do sal�rio bruto do trabalhador como 
contribui��o � previd�ncia social. Ap�s esse desconto, h� outro desconto de 5% sobre o valor restante do 
sal�rio bruto a t�tulo de um determinado imposto.
leia o sal�rio bruto de um cidad�o e apresente o seu sal�rio l�quido.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
//Declara��es
	float salarioBruto;
//Instru��es
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

