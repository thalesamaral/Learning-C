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
	int qtdTermos, i;
	float resultadoS, numerador, denominador;
	
//Instruções
	printf("Quantidade de termos de expressoes: ");
	scanf("%d",&qtdTermos);
	BARRA_DUPLA
	
	for(i=0; i<qtdTermos; i++){
		printf("-------- %d Termo --------\n",i+1);
		if(i==0){
			//1o TERMO: 1
			resultadoS = 1;
			printf("S = %g\n",resultadoS);
			BARRA_SIMPLES
		}else if(i == 1){
			numerador = 1;
			denominador = 2;
			//2o TERMO: S{1} = S + (1/2{0,5})
			printf("%g + %g/%g\n",resultadoS, numerador, denominador);
			resultadoS += (numerador/denominador);
			printf("S = %g\n",resultadoS);
			BARRA_SIMPLES
		}else if(i % 2 == 0){
			numerador += 2;
			denominador *= 2;
			//3o TERMO: S{1,5} = S - (3/4{0,75})
			printf("%g - %g/%g\n",resultadoS, numerador, denominador);
			resultadoS -= (numerador/denominador); 
			printf("S = %g\n",resultadoS);
			BARRA_SIMPLES
		}else if(i % 2 != 0){
			numerador += 2;
			denominador *= 2;
			//4o TERMO: S{0,375} = S + (5/8{0,625})
			printf("%g + %g/%g\n",resultadoS, numerador, denominador);
			resultadoS += (numerador/denominador);
			printf("S = %g\n",resultadoS);
			BARRA_SIMPLES
		}
	}
	BARRA_DUPLA
	printf("Resultado de S: %f\n",resultadoS);
	BARRA_DUPLA
	
	return 0;
}

