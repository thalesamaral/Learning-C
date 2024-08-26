//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "26/08/2024"
/*	Objetivo:
1. Faça um programa em C que leia os elementos de um vetor de 20 posições de inteiros e:
a) Apresente o vetor na ordem inversa à leitura;
b) Conte e apresente quantos elementos pares e ímpares existem no vetor;
c) Calcule e apresente a média dos elementos do vetor.
*/
//  Entrada.: vetor de float.
//  Saída...: imprimir a sequencia inversa.
#include<stdio.h>
#define TAM 3
#define BARRA_SIMPLES printf("--------------------------\n");
#define BARRA_DUPLA printf("==========================\n");

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	int valor[TAM];
	int i, par=0, impar=0, valorTotal=0;
	
//Instruções	
	//LEITURA
	for(i=0; i<TAM; i++){
		printf("%do Valor: ",i+1);
		scanf("%d",&valor[i]);
	}
	//CONTA PAR E IMPAR & VALOR TOTAL
	for(i=0; i<TAM; i++){
		if(valor[i] % 2 == 0){
			par++;
		}else{
			impar++;
		}

		valorTotal += valor[i];
	}
	//#A
	printf("\nInverso\n");
	BARRA_SIMPLES
	for(i=TAM-1; i>=0; i--){
		printf("%do Valor = %d\n",i+1,valor[i]);
	}
	//#B
	printf("\nQuantidade\n");
	BARRA_SIMPLES
	printf("Par: %d\n",par);
	printf("Impar: %d\n",impar);
	//#C
	printf("\nValor total - Media\n");
	BARRA_SIMPLES
	printf("Total: %d\n",valorTotal);
	printf("Media: %g\n",valorTotal/(TAM*1.0));
	
	return 0;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************
