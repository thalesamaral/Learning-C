//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "02/12/2021"
/*  Objetivo: Considere que uma empresa queira verificar se um empregado est� ou n�o qualificado para aposentadoria.
receba o n�mero do empregado (c�digo), o ano de seu nascimento e o ano de seu ingresso na empresa,
calcule e imprima a idade e o tempo de trabalho do empregado, e a mensagem �Requerer aposentadoria� ou �N�o requerer�.*/
//  Entrada.: N� do empregado, ano nascimento, ano de ingresso trabalho.
//  Sa�da...: condi��es para aposentadoria.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define anoAtual 2022

int main(void){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	int age;
	int workTime;
	int birthDay;
	int day1Job;
	
//Instru��es
	//printf("");
	//scanf("%",&);
	
	printf("Ano de Nascimento: ");
	scanf("%d",&birthDay);
	age = anoAtual - birthDay;
	
	printf("Ano de ingreeso ao trabalho: ");
	scanf("%d",&day1Job);
	workTime = anoAtual - day1Job;
	
	printf("\nIdade: %d",age);
	printf("\nTempo de Trabalho: %d\n",workTime);
	
	if((age >= 65) || (workTime >= 30))
		printf("Requerer aposentadoria");
	else if((age >= 60) && (workTime >= 25))
		printf("Requerer aposentadoria");
	else
		printf("N�o requerer");
	
	return 0;
}

