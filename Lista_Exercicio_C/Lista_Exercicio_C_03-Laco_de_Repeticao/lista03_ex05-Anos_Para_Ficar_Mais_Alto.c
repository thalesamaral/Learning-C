//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "08/08/2024"
/*	Objetivo:
Chico tem 1,50 metros e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 
3 centímetros por ano. Faça um programa em C que recebendo a altura e o crescimento 
anual, de cada uma, de duas pessoas calcule e imprima quantos anos serão necessários 
para que a mais baixa seja maior que a outra. Caso isto não ocorra em 100 anos informar 
mensagem de impossibilidade.
*/
#include<stdio.h>
#include<stdlib.h>

int main(void){
//Declarações
	float height1, height2, grow1, grow2;
	int years;

//Instruções
	printf("Pessoa 1 Altura: ");
	scanf("%f",&height1);
	printf("Crescimento por ano: ");
	scanf("%f",&grow1);

	printf("\nPessoa 2 Altura: ");
	scanf("%f",&height2);
	printf("Crescimento por ano: ");
	scanf("%f",&grow2);

	if(height1 < height2){
		do{
			height1 += grow1;
			height2 += grow2;
			years ++;
		}while(height1 <= height2 && years < 100);
	}else if(height2 < height1){
		do{
			height1 += grow1;
			height2 += grow2;
			years ++;
		}while(height2 <= height1 && years < 100);
	}else{
		printf("Alturas iguais!\n");
	}
	
	if(height1 != height2){
		if(years < 100){
			printf("\nPessoa 1: %.9gm\n",height1);
			printf("Pessoa 2: %.9gm\n",height2);
			printf("\nSe passaram %d anos para a pessoa mais baixa ficar maior que a mais alta.\n", years);
		}else{
			printf("\nLimite de 100 anos. Medicao impossivel!\n");
		}
	}
	return 0;
}

