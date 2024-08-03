//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "01/12/2021"
/*	Objetivo:
Faça um programa em C que receba a velocidade de um motorista na rodovia.
Caso esta velocidade seja maior que 80 quilômetros por hora, 
imprimir que O USUÁRIO ULTRAPASSOU A VELOCIDADE MÁXIMA E SERÁ MULTADO, 
caso contrário (velocidade igual ou menor que 80 km/h) imprimir que O USUÁRIO ESTÁ DENTRO DO LIMITE MÁXIMO DE VELOCIDADE.
*/
#include<stdio.h>
#include<stdlib.h>
#define Limite_Rodovia 80

int main(void){
//Declarações
	float speed;
	
//Instruções
	printf("Informe a velocidade do motorista em Km/h: ");
	scanf("%f",&speed);
	printf("\n%.2f Km/h\n",speed);
	
	if(speed > Limite_Rodovia)
		printf("O USUARIO ULTRAPASSOU A VELOCIDADE MAXIMA E SERA MULTADO");
	else
		printf("O USUARIO ESTA DENTRO DO LIMITE MAXIMO DE VELOCIDADE.");
	
	return 0;
}

