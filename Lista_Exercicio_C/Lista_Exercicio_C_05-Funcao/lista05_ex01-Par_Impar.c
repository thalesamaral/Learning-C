//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "19/08/2024"
/*	Objetivo:
1. Faça um programa em C que contenha subprograma. É necessário que seu programa como um todo leia um número inteiro n, verifica e imprime se este é par ou ímpar.
Utilize as boas práticas, não tendo leitura ou impressão dentro do subprograma.
*/
#include<stdio.h>
#define PAR 1
#define IMPAR 2

//Protótipo de Função
int verificar_par_impar(int);

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	int numero, resultado;
	
//Instruções
	
	printf("Digite um numero: ");
	scanf("%d",&numero);
	
	resultado = verificar_par_impar(numero);
	
	if(resultado == PAR){
		printf("\nPAR!\n");
	}else if(resultado == IMPAR){
		printf("\nIMPAR!\n");
	}
	
	return 0;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************

int verificar_par_impar(int num){
	
	if(num % 2 == 0)
		return PAR;
	else
		return IMPAR;
	
}
