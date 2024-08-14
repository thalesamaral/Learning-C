//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "02/12/2021"
/*	Objetivo:
Considere que em uma fábrica de peças, o salário base de um operário da linha de 
fabricação é de R$ 1.050,00 e que além do salário base o operário tem um adicional de 
produtividade baseado na quantidade de peças que ele fabrica por mês que é pago segundo 
o critério abaixo:
• Quando o número de peças é inferior, ou, 500: apenas o salário base;
• Quando o número de peças é superior a 500 e inferior, ou, 750: R$ 0,50 por peça fabricada acima das 500;
• Quando o número de peças for superior a 750: recebe R$ 1.180,00 (fixo) mais R$ 0,75 por peça fabricada acima das 750.
*/
#include<stdio.h>
#define Salario_Base 1050.00

int main(void){
//Declarações
	float salario = Salario_Base;
	int pecas;
	
//Instruções
	printf("Salario Base %.2fR$\n\n",Salario_Base);
	printf("Numero de pecas fabricadas no mes: ");
	scanf("%d",&pecas);
	
	if(pecas <= 500)
		printf("\nVoce recebera o Salario Base: %.2fR$",Salario_Base);
	else if(pecas <= 750){
		salario += (pecas-500)*0.50;
		printf("\nVoce recebera: %.2fR$",salario);
	}else{
		salario = 1180;
		salario += (pecas-750)*0.75;
		printf("\nVoce recebera: %.2fR$",salario);
	}
	
	return 0;
}

