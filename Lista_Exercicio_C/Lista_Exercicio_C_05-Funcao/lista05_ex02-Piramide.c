//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "09/12/2021"
/*	Objetivo: */
//  Entrada.:
//  Sa�da...:
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAM
//Prot�tipo de Fun��o
void calculoPiramide(int);

int main(void){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	int qtdCamadas;
	
//Instru��es
	//printf("");
	//scanf("%",&);
	
	printf("qtd Camadas: ");
	scanf("%d",&qtdCamadas);
	
	calculoPiramide(qtdCamadas);
	
	return 0;
}

void calculoPiramide(int qtd){
	int i, cantos=4, centro=1, frente=1, camada;
	
	for(i=1; i<=qtd; i++){
		centro += frente*cantos + cantos;
		frente += 2;
		camada = centro;
		printf("%d� Camada: %d\n",i,camada);
	}
	
	
}
