//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "02/12/2021"
/*  Objetivo:
Considere que uma empresa queira verificar se um empregado está ou não qualificado para 
aposentadoria. Para estar em condições, um dos seguintes requisitos deve ser satisfeito:
• Ter no mínimo 65 anos de idade;
• Ter trabalhado no mínimo 30 anos;
• Ter no mínimo 60 anos e ter trabalhado no mínimo 25 anos.
Faça um programa em C que receba o número do empregado (código), o ano de seu 
nascimento e o ano de seu ingresso na empresa, calcule e imprima a idade e o tempo 
de trabalho do empregado, e a mensagem “Requerer aposentadoria” ou “Não requerer”.
*/
#include<stdio.h>
#define anoAtual 2024

int main(void){
//Declarações
	int age;
	int workTime;
	int birthYear;
	int firstYearJob;
	
//Instruções
	printf("Ano de Nascimento: ");
	scanf("%d",&birthYear);
	age = anoAtual - birthYear;
	
	printf("Ano de ingresso ao trabalho: ");
	scanf("%d",&firstYearJob);
	workTime = anoAtual - firstYearJob;
	
	printf("\nIdade: %d",age);
	printf("\nTempo de Trabalho: %d\n",workTime);
	
	if(
		(age >= 65)
		|| (workTime >= 30)
		|| ((age >= 60) && (workTime >= 25))
	)
		printf("Requerer aposentadoria");
	else
		printf("Nao requerer");
	
	return 0;
}

