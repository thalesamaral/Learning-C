//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "08/08/2024"
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
	float salario=0, maiorSalario=0;
	float salarioAbaixo100=0, filhoTotal=0, salarioTotal=0;
	int filho=0, qtd=0;
	
//Instruções
	printf("=============================\n");
	printf("   Pesquisa da prefeitura\n");
	printf("=============================\n\n");

	printf("Digite o salario: ");
	scanf("%f",&salario);
	
	while(salario >= 0){
		printf("Quantos filhos: ");
		scanf("%d",&filho);	
		
		qtd++;
		salarioTotal += salario;
		filhoTotal += filho;
		
		if(salario > maiorSalario){
			maiorSalario = salario;
		}
			
		if(salario<=100){
			salarioAbaixo100++;
		}
		
		printf("\nDigite novo salario");
		printf("\nou -1 para finalizar: ");
		scanf("%f",&salario);
	}

	if(qtd > 0){
		printf("\n========================================================");
		printf("\nMedia do salario da populacao: %.2f\n", salarioTotal/qtd);
		printf("Media do numero de filhos: %.2f\n", filhoTotal/qtd);
		printf("Maior salario: %.2f\n", maiorSalario);
		printf("Percentual de pessoas com salario ate R$100,00: %.2f%%\n",(salarioAbaixo100*100)/qtd);
		printf("========================================================\n\n");
	}

	printf("Valor negativo, programa encerrado!\n\n");
	
	return 0;
}

