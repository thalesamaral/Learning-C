//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "14/12/2021"
/*	Objetivo: leia os elementos de um vetor de 20 posi��es de reais (float) e apresente o 
vetor na ordem inversa � leitura.*/
//  Entrada.: vetor de float.
//  Sa�da...: imprimir a sequ�ncia inversa.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAM 3

main(){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	float valor[TAM];
	int i;
	
//Instru��es
	//printf("");
	//scanf("%",&);
	
	for(i=0; i<TAM; i++){
		printf("%d� valor: ",i+1);
		scanf("%f",&valor[i]);
	}
	
	for(i=TAM-1; i>=0; i--){
		printf("\n%d� valor: %.2f",i+1,valor[i]);
	}
	
	return 0;
}



