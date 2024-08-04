//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "03/08/2024"
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
#define Hora_Mensal 160

int main(void){
//Declarações
	float salarioHora, salarioTotal, salarioExtra;
	float horaTrabalhada, horaExtra;
	
//Instruções
	printf("Horas trabalhadas no mes: ");
	scanf("%f",&horaTrabalhada);

	printf("Salario por hora: ");
	scanf("%f",&salarioHora);

	if(horaTrabalhada == Hora_Mensal){
		salarioTotal = Hora_Mensal * salarioHora;
		printf("\nSalario sem hora extra: %.2f\n",salarioTotal);
	}else if(horaTrabalhada > Hora_Mensal){
		horaExtra = horaTrabalhada - Hora_Mensal;
		salarioExtra = horaExtra * salarioHora * 1.5;
		
		salarioTotal = (Hora_Mensal * salarioHora) + salarioExtra;
		printf("\nSalario com hora extra: %.2f\n",salarioTotal);
	}else{
		printf("\nAtencao!! Minimo de 160 horas por mes.\n");
	}
	
	return 0;
}
