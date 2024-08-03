//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "06/12/2021"
/*	Objetivo: informações da população, apresentar estatísticas sobre*/
//  Entrada : salario e Nº de filhos.
//  Saída   : Médias do salario e filhos, maior salario e percentual de salario abaixo de 100RS.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	float salario, maiorSalario;
	float salarioAbaixo100, filhoTotal, salarioTotal;
	int filho, qtd;
	
//Instruções
	//printf("");
	//scanf("%",&);
	
	printf("========================================================\n");
	printf("Qual o salário: ");
	scanf("%f",&salario);
	
	while(salario >= 0){
		printf("Quantos filhos: ");
		scanf("%d",&filho);	
		
		qtd++;
		salarioTotal += salario;
		filhoTotal += filho;
		
		if(salario > maiorSalario)
			maiorSalario = salario;
			
		if(salario<=100)
			salarioAbaixo100++;
		
		printf("\nDigite novo salário ou -1 para finalizar!");
		scanf("%f",&salario);
	}
	printf("\n========================================================");
	printf("\nMédia do salário da população: %.2f\n", salarioTotal/qtd);
	printf("Média do número de filhos: %.2f\n", filhoTotal/qtd);
	printf("Maior salário: %.2f\n", maiorSalario);
	printf("Percentual de pessoas com salário até R$100,00: %.2f%%\n",(salarioAbaixo100*100)/qtd);
		
	return 0;
}

