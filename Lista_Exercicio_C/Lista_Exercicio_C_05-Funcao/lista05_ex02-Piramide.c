//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "09/12/2021"
/*	Objetivo:
2. Considerando que aproximadamente 3650 a.C., na época conhecida como das pirâmides, 
o faraó Djoser da III dinastia construiu a primeira grande pirâmide de Sakkara no mesmo 
local onde se encontram as construções funerárias mais antigas do Egito, em frente à Mênfis. 
Na ocasião, seu arquiteto teve que calcular a quantidade de blocos de pedra e o peso total 
da pirâmide. A pirâmide possui a característica de ser a sobreposição de camadas de blocos, 
onde a camada superior possui um bloco a menos que a camada inferior. Faça um programa 
em C que contenha subprograma. É necessário que seu programa como um todo leia a 
quantidade de blocos da camada base da pirâmide, calcule e imprima a quantidade de 
blocos que serão necessários para a construção da pirâmide e o peso total que a pirâmide terá 
quando pronta.
*/
// Entrada: Quantidade de blocos da camada base da pirâmide.
// Saída: quantidade de blocos e o peso total que a pirâmide terá quando pronta.
#include<stdio.h>
#include<stdlib.h>
#define TAM

//Protótipo de Função
void calculoPiramide(int);

int main(void){
//Declarações
	int qtdCamadas;
	
//Instruções
	
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
		printf("%d -> Camada: %d\n",i,camada);
	}
}
