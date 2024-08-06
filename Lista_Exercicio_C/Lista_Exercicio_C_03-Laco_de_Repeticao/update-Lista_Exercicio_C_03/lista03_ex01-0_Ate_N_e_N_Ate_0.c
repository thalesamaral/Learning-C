//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "04/12/2021"
/*	Objetivo:
Faça um programa em C que receba um número e imprima todos os números de zero (0) 
até o número informado pelo usuário e em seguida imprima, em ordem inversa (maior para 
menor), todos os números do número informado pelo usuário até zero (0).
*/
#include<stdio.h>
#include<stdlib.h>

int main(void){
//Declarações
	int num;
	int i=0;
	
//Instruções	
	do{
		printf("Digite um n�mero positivo: ");
		scanf("%d",&num);	
	}while(num<0);
	
	do{
		printf("%d\n",i);
		i++;
	}while(i<=num);
	
	printf("\n");
	
	do{
		printf("%d\n",num);
		num--;
	}while(num>=0);
	
	return 0;
}

