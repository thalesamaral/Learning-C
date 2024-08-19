//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "06/12/2021"
/*	Objetivo:
Aproximadamente 3650 a.C., na época conhecida como das pirâmides, o faraó Djoser da III 
dinastia construiu a primeira grande pirâmide de Sakkara no mesmo local onde se encontram 
as construções funerárias mais antigas do Egito, em frente à Mênfis. Na ocasião, seu 
arquiteto teve que calcular a quantidade de blocos de pedra e o peso total da pirâmide. A 
pirâmide possui a característica de ser a sobreposição de camadas de blocos, onde a 
camada superior possui um bloco a menos que a camada inferior. Você deve fazer um 
programa em C que recebendo do usuário a quantidade de blocos da camada base da 
pirâmide e o peso de cada um dos blocos de pedra, calcule e imprima a quantidade de blocos 
que serão necessários para a construção da pirâmide e o peso total que a pirâmide terá 
quando pronta.
*/
#include<stdio.h>
#include<stdlib.h>
#define TAM 10

int main(void){
//Declarações
	int i, centro=1, lados=1, canto=4, camada, tamanho;
	float bloco;
	
//Instruções
	printf("Quantas camadas voce deseja na piramide: ");
	scanf("%d",&tamanho);
	
	for(i=1; i<=tamanho; i++){
		camada = ((lados*canto)+(centro+canto));
		printf("%do Camada %d blocos\n",i,camada);
		lados+=2;
		centro=camada;
	}
	
	printf("\nQual o peso do bloco em Kg: ");
	scanf("%f",&bloco);
	
	printf("\nO peso total da Piramide: %.2f Kg",(camada*bloco)+bloco);
	
	return 0;
}

