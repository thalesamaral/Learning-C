//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "11/08/2024"
/*	Objetivo:
Faça um programa em C que receba a quantidade de termos da expressão (a expressão 
abaixo tem 6 termos: S = 1 + 1/2 - 3/4 + 5/8 - 7/16 + 9/32 - ..., etc.), calcule e imprima o valor resultado de (S).
*/
//  Entrada : qtd termos de expressões.
//  Saída   : resultado do calculo de todas as expressões.
#include<stdio.h>
#include<stdlib.h>
#define TAM 6
#define BARRA_SIMPLES printf("--------------------------\n");
#define BARRA_DUPLA printf("==========================\n");

int main(void){
//Declarações
	int qtdTermos, i, flag;
	float resultadoS, numerador, denominador;
	
//Instruções
	printf("Quantidade de termos de expressoes: ");
	scanf("%d",&qtdTermos);
	BARRA_DUPLA
	
	flag = 1;
	for(i=1; i<qtdTermos; i++){
		printf("-------- %d Termo --------\n",i);
		if(flag){
			//1o TERMO: S = 1
			resultadoS = 1;
			numerador = 1;
			denominador = 2;
		}else if(i % 2 == 0){
			printf("%g + %g/%g\n",resultadoS, numerador, denominador);
			resultadoS += (numerador/denominador);
		}else if(i % 2 != 0){
			printf("%g - %g/%g\n",resultadoS, numerador, denominador);
			resultadoS -= (numerador/denominador);
		}
		
		if(!flag){
			numerador += 2;
			denominador *= 2;
		}
		flag=0;

		printf("S = %g\n",resultadoS);
		BARRA_SIMPLES
	}
	BARRA_DUPLA
	printf("Resultado de S: %f\n",resultadoS);
	BARRA_DUPLA
	
	return 0;
}

