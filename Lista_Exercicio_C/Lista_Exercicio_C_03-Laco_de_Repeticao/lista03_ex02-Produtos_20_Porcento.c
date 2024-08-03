//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "05/12/2021"
/*	Objetivo: aumentar 20% do valor do produto, depois mostrar a média dos preços antigos e novos*/
//  Entrada : código, quantidade de produto, preco
//  Saída   : médias do preço Inicial e preço 20%.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(void){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	int cod, qtd;
	float preco, precoInicial, preco20;
	
//Instruções
	//printf("");
	//scanf("%",&);
	
	printf("Digite o código do produto: ");
	scanf("%d",&cod);
	
	while(cod > 0){	
		printf("Preço do produto, código %d: ",cod);
		scanf("%f",&preco);
		
		qtd++;
		precoInicial += preco;
		preco20 += preco+(preco*0.2);
		printf("Preço com 20%%.............: %.2f",preco+preco*0.2);
		
		printf("\n\n==========================================\n");
		printf("Média do preço inicial %.2f",precoInicial/qtd);
		printf("\nMédia do preço com 20%% %.2f",preco20/qtd);
		printf("\n==========================================\n");
		
		printf("\nDigite novo código ou -1 para finalizar: ");
		scanf("%d",&cod);
	}
	
	return 0;
}




