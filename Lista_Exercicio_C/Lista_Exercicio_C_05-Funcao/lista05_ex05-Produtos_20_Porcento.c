//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "10/12/2021"
/*	Objetivo: Seu programa deve ler o código e o preço de custo de cada produto e calcular o novo preço.
Calcule também, a média dos preços com e sem aumento. Mostre o código e o novo preço de cada produto e, 
no final, as médias.*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//Protótipo de Função
float calculaPreco20(int, float);

int main(void){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	int codigo, qtd;
	float preco, precoInicial, preco20;
	
//Instruções
	//printf("");
	//scanf("%",&);
	
	printf("Digite -1 para finalizar!\n");
	printf("Digite o Codigo: ");
	scanf("%d",&codigo);
	
	while(codigo >= 0){
		do{
			printf("Digite o preço: ");
			scanf("%f",&preco);
			
			qtd++;
			precoInicial += preco;
			
			preco20 += calculaPreco20(codigo, preco);
			
			printf("\n==========================================\n");
			printf("Média do preço inicial %.2f",precoInicial/qtd);
			printf("\nMédia do preço com 20%% %.2f",preco20/qtd);
			printf("\n==========================================\n\n");
			
			printf("Digite -1 para finalizar!\n");
			printf("Digite o Codigo: ");
			scanf("%d",&codigo);
		}while(codigo > 0);
	}
	return 0;
}/////////////////////

float calculaPreco20(int cod, float preco){
	
	printf("\nCódigo: %d Preço antigo: %.2f",cod,preco);
	preco += (preco * 20)/100;
	printf("\nCódigo: %d Preço novo: %.2f\n",cod,preco);
	
	return preco;
}

