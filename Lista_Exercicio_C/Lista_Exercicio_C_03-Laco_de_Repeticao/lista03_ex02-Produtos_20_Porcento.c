//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "05/12/2021"
/*	Objetivo: aumentar 20% do valor do produto, depois mostrar a m�dia dos pre�os antigos e novos*/
//  Entrada : c�digo, quantidade de produto, preco
//  Sa�da   : m�dias do pre�o Inicial e pre�o 20%.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(void){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	int cod, qtd;
	float preco, precoInicial, preco20;
	
//Instru��es
	//printf("");
	//scanf("%",&);
	
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




