//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "06/12/2021"
/*	Objetivo: recebendo do usuário a quantidade de blocos da camada base da pirâmide
e o peso de cada um dos blocos de pedra, calcule e imprima a quantidade de blocos que serão necessários
para a construção da pirâmide e o peso total que a pirâmide terá quando pronta.*/
//  Entrada : qtd de camada e o peso do bloco.
//  Saída   : peso total da pirâmide.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAM 10

int main(void){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	int i, centro=1, lados=1, canto=4, camada, tamanho;
	float bloco;
	
//Instruções
	//printf("");
	//scanf("%",&);
	
	printf("Quantas camadas você deseja em sua pirâmide: ");
	scanf("%d",&tamanho);
	
	for(i=1; i<=tamanho; i++){
		camada = ((lados*canto)+(centro+canto));
		printf("%dª Camada %d blocos\n",i,camada);
		lados+=2;
		centro=camada;
	}
	
	printf("\nQual o peso do bloco em Kg: ");
	scanf("%f",&bloco);
	
	printf("\nO peso total da Pirâmide: %.1f Kg",(camada*bloco)+bloco);
	
	return 0;
}

