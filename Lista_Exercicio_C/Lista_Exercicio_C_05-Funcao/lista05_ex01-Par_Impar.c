//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "09/12/2021"
/*	Objetivo: � necess�rio que seu programa como um todo leia um
n�mero inteiro n, verifica e imprime se este � par ou �mpar.*/
//  Entrada.: N�mero.
//  Sa�da...: Par ou �mpar
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAM
//Prot�tipo de Fun��o
int verificarParImpar(int);

int main(void){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	int num;
	
//Instru��es
	//printf("");
	//scanf("%",&);
	
	printf("Digite um n�mero: ");
	scanf("%d",&num);
	
	verificarParImpar(num);
	
	if(num % 2 == 0)
		printf("PAR!\n");
	else
		printf("�MPAR!\n");
	
	return 0;
}

int verificarParImpar(int n){
	
	if(n % 2 == 0)
		return n;
	else
		return n;
	
}
