//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "08/12/2021"
/*	Objetivo: receba a quantidade de termos da expressão (a expressão abaixo tem 6 termos: 
1, 1/2, 3/4, etc.), calcule e imprima o valor resultado de (S).*/
//  Entrada : qtd termos de expressões.
//  Saída   : resultado do calculo de todas as expressões.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAM

int main(void){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	int qtdTermos, i, flag;
	float S=1, topo=1, abaixo=2;
	
//Instruções
	//printf("");
	//scanf("%",&);
	
	printf("Quantidade termos de expressões: ");
	scanf("%d",&qtdTermos);
	printf("=============================\n");
	flag=0;
	
	for(i=1; i<=qtdTermos; i++){
		printf("%dº Termo\n",i);
		if(flag==0){
			printf("S = %.0f\n",S); //1º TERMO
			printf("-----------------------------\n");
		}else if(i % 2 == 0){
			S += S*(topo/abaixo); //S{1} = S + (S * 1/2{0,5}): 2º TERMO
			printf(" + %.0f/%.0f\n",topo, abaixo);
			printf("S = %f\n",S);
			printf("-----------------------------\n");
		}else if(i % 2 != 0){
			S -= S*(topo/abaixo); //S{1,5} = S - (S * 3/4{0,75}): 3º TERMO
			printf(" - %.0f/%.0f\n",topo, abaixo);
			printf("S = %f\n",S);
			printf("-----------------------------\n");
		}
		if(flag==1){
			topo += 2;
			abaixo *= 2;
		}
		flag=1;
	}
	printf("Resultado de S: %f",S);
	printf("\n=============================");
	return 0;
}

