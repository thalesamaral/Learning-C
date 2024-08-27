//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "15/12/2021"
/*	Objetivo:
7. Faça um programa em C que leia um vetor numérico de 20 posições e o compacte 
considerando zero como valor inútil, ou seja, mova os elementos diferentes de zero, sem 
alterar a ordem deles, para o início do vetor, deixando os zeros no final do vetor.
*/
//  Entrada.: Um vetor de int.
//  Saida...: realocar os valores zero para o final da lista.
#include<stdio.h>
#include<stdlib.h>
#define TAM 3

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	int i, j, vet[TAM];
	
//Instruções
	printf("\nVetor 1\n");
	for(i=0; i<TAM; i++){
		printf("%do Valor: ",i+1);
		scanf("%d",&vet[i]);
	}
	
	for(i=0; i<TAM; i++){
		j = i;
		if(vet[j] == 0){
			while(j<TAM-1){
				vet[j] = vet[j+1];
				j++;
			}
			vet[j]=0;
		}
	}
	
	printf("\nVetor Organizado\n");
	for(i=0; i<TAM; i++){
		printf("%do Valor: %d\n",i+1,vet[i]);
	}
	
	return 0;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************
