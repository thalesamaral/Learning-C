//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "05/08/2022"
/*	Objetivo:
Considere que a jornada de trabalho semanal de um funcionário é de 40 horas e que se o 
funcionário trabalhar mais de 40 horas receberá hora extra, cujo cálculo é o valor da hora 
regular com um acréscimo de 50%. Escreva um programa em C que receba o número de 
horas trabalhadas em um mês, o salário por hora e escreva o salário total do funcionário, 
que deverá ser acrescido das horas extras, caso tenham sido trabalhadas (considere que o 
mês possua 4 semanas exatas).
*/
#include<stdio.h>
#include<stdlib.h>

int main(void){
//Declarações
	float salarioHora;
	float salarioTotal;
	int horaTrabalhada;
	
//Instruções
	printf("Qual o salario por hora?\n");
	scanf("%f",&salarioHora);
	do{
		printf("Quantas horas foram trabalhadas no mes?\n");
		scanf("%d",&horaTrabalhada);
		if(horaTrabalhada < 160){
			printf("\nMinimo de 160 horas por mes!!\n");
		}else if(horaTrabalhada > 160){
			salarioTotal = 160 * salarioHora;
			salarioHora += salarioHora/2;
			salarioTotal += (horaTrabalhada-160) * salarioHora;
			printf("Salario com hora extra: %f\n",salarioTotal);
		}else{
			salarioTotal = 160 * salarioHora;
			printf("\nSalario sem hora extra: %f\n",salarioTotal);
		}
	}while(horaTrabalhada < 160);
	
	return 0;
}


// FIM *************************************************************************************************************************

