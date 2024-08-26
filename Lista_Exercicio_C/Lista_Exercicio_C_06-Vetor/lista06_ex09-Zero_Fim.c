//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "15/12/2021"
/*	Objetivo: leia um vetor num�rico de 20 posi��es e o compacte considerando zero como valor in�til, 
ou seja, mova os elementos diferentes de zero, sem alterar a ordem deles, para o in�cio do vetor, 
deixando os zeros no final do vetor.*/
//  Entrada.: Um vetor de int.
//  Sa�da...: realocar os valores zero para o final da lista.
#include<stdio.h>
#include<stdlib.h>
#define TAM 10

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	int i=0, j=0, vet[TAM];
	
//Instruções
	//printf("");
	//scanf("%",&);
	
	for(i=0; i<TAM; i++){
		printf("Vetor 1 - %d� valor: ",i+1);
		scanf("%d",&vet[i]);
	}
	
	for(i=0; i<TAM; i++){
		j = i;
		if(vet[i] == 0){
			while(i<TAM-1){
				vet[i] = vet[i+1];
				i++;
			}
			vet[i]=0;
		}
		i = j;
	}
	
	for(i=0; i<TAM; i++){
		printf("Vetor Organizado - %d� valor: %d\n",i+1,vet[i]);
	}
	
	return 0;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************



