//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "19/08/2024"
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
// Entrada..: Quantidade de blocos da camada base da pirâmide e o peso de um bloco.
// Saída....: Quantidade de blocos e o peso total que a pirâmide terá quando pronta.
#include<stdio.h>

//Protótipo de Função
int calcula_quantidade_blocos(int);

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	int qtdBlocoBase, qtdBlocoTotal;
	float blocoPeso;
	
//Instruções
	
	printf("Quantidade de blocos da camada base da piramide\n");
	printf("Resposta: ");
	scanf("%d",&qtdBlocoBase);
	
	qtdBlocoTotal = calcula_quantidade_blocos(qtdBlocoBase);
	
	if(qtdBlocoTotal){
		printf("\nPeso do bloco em Kg: ");
		scanf("%f",&blocoPeso);
		
		printf("\nPeso total da Piramide. %.2f Kg\n",blocoPeso * qtdBlocoTotal);
	}else{
		printf("\nQuantidade de bloco invalida!\n");
	}

	return 0;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************

int calcula_quantidade_blocos(int qtdInicial){
	int i=0, qtdTotal=0;
	
	while(qtdInicial > 0){
		i++;
		printf("%do Camada - Blocos: %d\n",i, qtdInicial);
		qtdTotal += qtdInicial;
		qtdInicial -= 1;
	}

	return qtdTotal;
}
