//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "05/08/2022"
/*	Objetivo: */
//  Entrada.: N� horas trabalhadas, sal�rio por h, sal�rio total.
//  Sa�da...: sal�rio acrescido por horas extras.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	float salarioHora;
	float salarioTotal;
	int horaTrabalhada;
	
//Instru��es
	//printf("");
	//scanf("%",&);
	
	printf("Qual o sal�rio por hora?\n");
	scanf("%f",&salarioHora);
	do{
		printf("Quantas horas foram trabalhadas no m�s?\n");
		scanf("%d",&horaTrabalhada);
		if(horaTrabalhada < 160){
			printf("\nM�nimo de 160 horas por m�s!!\n");
		}else if(horaTrabalhada > 160){
			salarioTotal = 160 * salarioHora;
			salarioHora += salarioHora/2;
			salarioTotal += (horaTrabalhada-160) * salarioHora;
			printf("Sal�rio com hora extra: %f\n",salarioTotal);
		}else{
			salarioTotal = 160 * salarioHora;
			printf("\nSal�rio sem hora extra: %f\n",salarioTotal);
		}
	}while(horaTrabalhada < 160);
	
	return 0;
}


// FIM *************************************************************************************************************************

