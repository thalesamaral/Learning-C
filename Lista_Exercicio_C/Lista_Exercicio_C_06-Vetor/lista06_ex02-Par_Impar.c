//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "14/12/2021"
/*	Objetivo: leia os elementos de um vetor de 20 posi��es de inteiros, conte e apresente 
quantos elementos pares e �mpares existem no vetor.*/
//  Entrada.: vetor de int.
//  Sa�da...: imprimir se � par ou �mpar.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAM 5

main(){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	int valor[TAM], i, par=0, impar=0;
	
//Instru��es
	//printf("");
	//scanf("%",&);
	
	for(i=0; i<TAM; i++){
		printf("%d� valor: ",i+1);
		scanf("%d",&valor[i]);
		if(valor[i] % 2 == 0)
			par++;
		else
			impar++;
	}
	
	printf("\nPar: %d\n",par);
	printf("�mpar: %d",impar);
	
	return 0;
}



