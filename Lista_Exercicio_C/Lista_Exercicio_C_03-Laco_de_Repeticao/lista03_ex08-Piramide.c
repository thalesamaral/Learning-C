//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "11/08/2024"
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

int main(void){
//Declarações
	int blocoBase, blocoTotal=0, i=0;
	float blocoPeso;
	
//Instruções
	printf("Quantidade de blocos na base da piramide: ");
	scanf("%d",&blocoBase);
	
	while(blocoBase > 0){
		i++;
		printf("%do Camada - Blocos: %d\n",i, blocoBase);
		blocoTotal += blocoBase;
		blocoBase -= 1;
	}

	if(i){
		printf("\nQual o peso do bloco em Kg: ");
		scanf("%f",&blocoPeso);
		
		printf("\nO peso total da Piramide: %.2f Kg\n",blocoPeso * blocoTotal);
	}else{
		printf("\nQuantidade de bloco invalida!\n");
	}

	return 0;
}

