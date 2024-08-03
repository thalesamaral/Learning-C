//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "06/12/2021"
/*	Objetivo: informa��es da popula��o, apresentar estat�sticas sobre*/
//  Entrada : salario e N� de filhos.
//  Sa�da   : M�dias do salario e filhos, maior salario e percentual de salario abaixo de 100RS.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	float salario, maiorSalario;
	float salarioAbaixo100, filhoTotal, salarioTotal;
	int filho, qtd;
	
//Instru��es
	//printf("");
	//scanf("%",&);
	
	printf("========================================================\n");
	printf("Qual o sal�rio: ");
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
		
		printf("\nDigite novo sal�rio ou -1 para finalizar!");
		scanf("%f",&salario);
	}
	printf("\n========================================================");
	printf("\nM�dia do sal�rio da popula��o: %.2f\n", salarioTotal/qtd);
	printf("M�dia do n�mero de filhos: %.2f\n", filhoTotal/qtd);
	printf("Maior sal�rio: %.2f\n", maiorSalario);
	printf("Percentual de pessoas com sal�rio at� R$100,00: %.2f%%\n",(salarioAbaixo100*100)/qtd);
		
	return 0;
}

