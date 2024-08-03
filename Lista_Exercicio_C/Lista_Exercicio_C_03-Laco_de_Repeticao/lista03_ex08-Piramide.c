//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "06/12/2021"
/*	Objetivo: recebendo do usu�rio a quantidade de blocos da camada base da pir�mide
e o peso de cada um dos blocos de pedra, calcule e imprima a quantidade de blocos que ser�o necess�rios
para a constru��o da pir�mide e o peso total que a pir�mide ter� quando pronta.*/
//  Entrada : qtd de camada e o peso do bloco.
//  Sa�da   : peso total da pir�mide.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAM 10

int main(void){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	int i, centro=1, lados=1, canto=4, camada, tamanho;
	float bloco;
	
//Instru��es
	//printf("");
	//scanf("%",&);
	
	printf("Quantas camadas voc� deseja em sua pir�mide: ");
	scanf("%d",&tamanho);
	
	for(i=1; i<=tamanho; i++){
		camada = ((lados*canto)+(centro+canto));
		printf("%d� Camada %d blocos\n",i,camada);
		lados+=2;
		centro=camada;
	}
	
	printf("\nQual o peso do bloco em Kg: ");
	scanf("%f",&bloco);
	
	printf("\nO peso total da Pir�mide: %.1f Kg",(camada*bloco)+bloco);
	
	return 0;
}

