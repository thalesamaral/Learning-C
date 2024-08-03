//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "05/08/2022"
/*	Objetivo: */
//  Entrada.: Nº horas trabalhadas, salário por h, salário total.
//  Saída...: salário acrescido por horas extras.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	float salarioHora;
	float salarioTotal;
	int horaTrabalhada;
	
//Instruções
	//printf("");
	//scanf("%",&);
	
	printf("Qual o salário por hora?\n");
	scanf("%f",&salarioHora);
	do{
		printf("Quantas horas foram trabalhadas no mês?\n");
		scanf("%d",&horaTrabalhada);
		if(horaTrabalhada < 160){
			printf("\nMínimo de 160 horas por mês!!\n");
		}else if(horaTrabalhada > 160){
			salarioTotal = 160 * salarioHora;
			salarioHora += salarioHora/2;
			salarioTotal += (horaTrabalhada-160) * salarioHora;
			printf("Salário com hora extra: %f\n",salarioTotal);
		}else{
			salarioTotal = 160 * salarioHora;
			printf("\nSalário sem hora extra: %f\n",salarioTotal);
		}
	}while(horaTrabalhada < 160);
	
	return 0;
}


// FIM *************************************************************************************************************************

