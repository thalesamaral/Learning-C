//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "14/12/2021"
/*	Objetivo: leia os elementos de um vetor de 20 posições de inteiros e apresente o vetor. 
Em seguida troque o primeiro elemento com o último, o segundo com o penúltimo, o terceiro com o 
antepenúltimo, e assim sucessivamente. Por fim, apresente novamente o vetor depois das trocas.*/
//  Entrada.: Um vetor de int.
//  Saída...: vetor valores invertidos
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAM 5

main(){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	int i, j, v[TAM], aux;
	
//Instruções
	//printf("");
	//scanf("%",&);
	
	for(i=0; i<TAM; i++){
		printf("%dº valor: ",i+1);
		scanf("%d",&v[i]);
	}
	
	printf("\nAntes\n");
	for(i=0; i<TAM; i++){
		printf("%dº valor: %d\n",i,v[i]);
	}
	
	for(i=0, j=TAM-1; i<TAM/2; i++, j--){
		aux = v[i];
		v[i] = v[j];
		v[j] = aux;
	}
	
	printf("\nDepois");
	for(i=0; i<TAM; i++){
		printf("\n%dº valor: %d",i,v[i]);
	}
	
	return 0;
}



