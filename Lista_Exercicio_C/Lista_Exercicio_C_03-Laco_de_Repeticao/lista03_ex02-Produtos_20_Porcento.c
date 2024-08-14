//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "05/08/2024"
/*	Objetivo:
Uma empresa deseja aumentar seus preços em 20%. Faça um programa em C que leia o 
código e o preço de custo de cada produto, calcule e imprima o novo preço e, ao final, as 
médias dos preços com e sem aumento. A entrada de dados deve terminar quando for lido
um código de produto negativo.
*/
#include<stdio.h>

int main(void){
//Declarações
	int cod, qtd=0;
	float preco, precoTotal=0, preco20Total=0;
	
//Instruções
	printf("Codigo do produto deve ser a partir de zero.\n");
	printf("Digite -1 para finalizar o programa!\n\n");
	printf("Digite o codigo do produto: ");
	scanf("%d",&cod);
	
	while(cod >= 0){
		printf("Preco do produto (%d): ",cod);
		scanf("%f",&preco);
		
		qtd++;
		precoTotal += preco;
		preco20Total += preco*1.2;
		
		printf("==========================================\n");
		printf("Total Preco inicial: %.2f\n",precoTotal);
		printf("Total Preco 20%%: %.2f\n",preco20Total);
		printf("\nQuantidade de produtos: %d\n\n",qtd);
		printf("Media Preco inicial: %.2f\n",precoTotal/qtd);
		printf("Media Preco 20%%: %.2f\n",preco20Total/qtd);
		printf("==========================================\n\n\n");
		
		printf("Digite novo codigo ou -1 para finalizar: ");
		scanf("%d",&cod);
	}
	
	return 0;
}




