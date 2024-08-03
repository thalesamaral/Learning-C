//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "30/11/2021"
/*	Objetivo:
Faça um programa em C que receba as dimensões de um retângulo (base e altura), calcule e imprima a área deste retângulo.
*/
#include<stdio.h>
#include<stdlib.h>

int main(void){
//Declarações
	int base, altura;
	
//Instruções
	printf("Digite a base do retangulo: ");
	scanf("%d",&base);
	
	printf("Digite a altura do retangulo: ");
	scanf("%d",&altura);
	
	printf("A area do retangulo: %d\n\n", base*altura);
	
	return 0;
}
