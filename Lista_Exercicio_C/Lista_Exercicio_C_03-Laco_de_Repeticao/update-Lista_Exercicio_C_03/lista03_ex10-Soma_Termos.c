//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "08/12/2021"
/*	Objetivo:
Faça um programa em C que receba a quantidade de termos da expressão (a expressão 
abaixo tem 6 termos: S = 1 + 1/2 - 3/4 + 5/8 - 7/16 + 9/32 - ..., etc.), calcule e imprima o valor resultado de (S).
*/
//  Entrada : qtd termos de expressões.
//  Saída   : resultado do calculo de todas as expressões.
#include<stdio.h>
#include<stdlib.h>
#define TAM

int main(void){
//Declarações
	int qtdTermos, i;
	float S, topo, abaixo;
	
//Instruções
	printf("Quantidade termos de express�es: ");
	scanf("%d",&qtdTermos);
	printf("=============================\n");
	
	for(i=1; i<=qtdTermos; i++){
		printf("%d� Termos\n",i);
		if(i==1){
			S=1; //1� TERMO
			printf("S = %.0f\n",S);
			printf("-----------------------------\n");
		}else if(i==2){
			topo = 1;
			abaixo = 2;
			S += S*(topo/abaixo); //S{1} = S + (S * 1/2{0,5}): 2� TERMO
			printf(" + %.0f/%.0f\n",topo, abaixo);
			printf("S = %.2f\n",S);
			printf("-----------------------------\n");
		}else if(i % 2 != 0){
			topo += 2;
			abaixo *= 2;
			S -= S*(topo/abaixo); //S{1,5} = S - (S * 3/4{0,75}): 3� TERMO
			printf(" - %.0f/%.0f\n",topo, abaixo);
			printf("S = %f\n",S);
			printf("-----------------------------\n");
		}else if(i % 2 == 0){
			topo += 2;
			abaixo *= 2;
			S += S*(topo/abaixo); //S{0,375} = S + (S * 5/8{0,625}): 4� TERMO
			printf(" + %.0f/%.0f\n",topo, abaixo);
			printf("S = %f\n",S);
			printf("-----------------------------\n");
		}
	}
	printf("Resultado de S: %f",S);
	printf("\n=============================");
	return 0;
}

