//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "06/12/2021"
/*	Objetivo:
A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre 
o salário e número de filhos. A prefeitura deseja saber:
	- Média do salário da população;
	- Média do número de filhos;
	- Maior salário;
	- Percentual de pessoas com salário até R$100,00.
O final da leitura de dados se dará com a entrada de um salário negativo.
*/
#include<stdio.h>
#include<stdlib.h>

int main(void){
//Declarações
	float salario, maiorSalario;
	float salarioAbaixo100, filhoTotal, salarioTotal;
	int filho, qtd;
	
//Instruções
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

