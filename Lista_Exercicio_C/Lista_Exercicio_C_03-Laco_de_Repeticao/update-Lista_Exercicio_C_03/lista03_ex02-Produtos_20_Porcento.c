//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "05/12/2021"
/*	Objetivo:
Uma empresa deseja aumentar seus preços em 20%. Faça um programa em C que leia o 
código e o preço de custo de cada produto, calcule e imprima o novo preço e, ao final, as 
médias dos preços com e sem aumento. A entrada de dados deve terminar quando for lido
um código de produto negativo.
*/
#include<stdio.h>
#include<stdlib.h>

int main(void){
//Declarações
	int cod, qtd;
	float preco, precoInicial, preco20;
	
//Instruções
	printf("Digite o c�digo do produto: ");
	scanf("%d",&cod);
	
	while(cod > 0){	
		printf("Pre�o do produto, c�digo %d: ",cod);
		scanf("%f",&preco);
		
		qtd++;
		precoInicial += preco;
		preco20 += preco+(preco*0.2);
		printf("Pre�o com 20%%.............: %.2f",preco+preco*0.2);
		
		printf("\n\n==========================================\n");
		printf("M�dia do pre�o inicial %.2f",precoInicial/qtd);
		printf("\nM�dia do pre�o com 20%% %.2f",preco20/qtd);
		printf("\n==========================================\n");
		
		printf("\nDigite novo c�digo ou -1 para finalizar: ");
		scanf("%d",&cod);
	}
	
	return 0;
}




