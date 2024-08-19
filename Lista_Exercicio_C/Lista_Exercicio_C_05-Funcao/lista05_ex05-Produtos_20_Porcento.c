//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "10/12/2021"
/*	Objetivo: Seu programa deve ler o c�digo e o pre�o de custo de cada produto e calcular o novo pre�o.
Calcule tamb�m, a m�dia dos pre�os com e sem aumento. Mostre o c�digo e o novo pre�o de cada produto e, 
no final, as m�dias.*/
#include<stdio.h>
#include<stdlib.h>

//Protótipo de Função
float calculaPreco20(int, float);

int main(void){
//Declarações
	int codigo, qtd;
	float preco, precoInicial, preco20;
	
//Instruções
	
	printf("Digite -1 para finalizar!\n");
	printf("Digite o Codigo: ");
	scanf("%d",&codigo);
	
	while(codigo >= 0){
		do{
			printf("Digite o pre�o: ");
			scanf("%f",&preco);
			
			qtd++;
			precoInicial += preco;
			
			preco20 += calculaPreco20(codigo, preco);
			
			printf("\n==========================================\n");
			printf("M�dia do pre�o inicial %.2f",precoInicial/qtd);
			printf("\nM�dia do pre�o com 20%% %.2f",preco20/qtd);
			printf("\n==========================================\n\n");
			
			printf("Digite -1 para finalizar!\n");
			printf("Digite o Codigo: ");
			scanf("%d",&codigo);
		}while(codigo > 0);
	}
	return 0;
}/////////////////////

float calculaPreco20(int cod, float preco){
	
	printf("\nC�digo: %d Pre�o antigo: %.2f",cod,preco);
	preco += (preco * 20)/100;
	printf("\nC�digo: %d Pre�o novo: %.2f\n",cod,preco);
	
	return preco;
}

