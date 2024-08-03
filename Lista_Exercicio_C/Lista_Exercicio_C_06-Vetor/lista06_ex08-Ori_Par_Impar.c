//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "15/12/2021"
/*	Objetivo: crie 3 vetores de 20 posições, chamados: original, pares e ímpares. Em seguida 
leia os elementos do original, teste seus valores (pares ou ímpares) e coloque nos respectivos vetores do 
início para o final. Garanta que as posições “vazias” dos vetores pares e ímpares estejam com zero.*/
//  Entrada.: Três vetores: Original, pares ímpares.
//  Saída...: Organizar pares e ímpares.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAM 4

main(){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	int original[TAM], par[TAM], impar[TAM];
	int i=0, j=0, k=0, l=0;
	
//Instruções
	//printf("");
	//scanf("%",&);
	
	for(i=0; i<TAM; i++){
		printf("%dº valor: ",i+1);
		scanf("%d",&original[i]);
		
		if(original[i] % 2 == 0)
			par[j++] = original[i];//K++ e J++ é Pós incremento, portanto,
		else
			impar[k++] = original[i];//primeiro usa o valor depois incrementa.

		if(i == TAM-1){ //quando acaba o FOR principal
			for(l=j; l<TAM; l++){
				par[l] = 0;
			}
			for(l=k; l<TAM; l++){
				impar[l] = 0;
			}
		}
	}
	
	for(i=0; i<TAM; i++){
		printf("Vetor Par - %dº valor: %d\n",i+1,par[i]);
	}
	
	for(i=0; i<TAM; i++){
		printf("Vetor Ímpar - %dº valor: %d\n",i+1,impar[i]);
	}
	
	return 0;
}

