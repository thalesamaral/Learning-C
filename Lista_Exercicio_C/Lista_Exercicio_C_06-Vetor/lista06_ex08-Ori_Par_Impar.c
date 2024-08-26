//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "15/12/2021"
/*	Objetivo: crie 3 vetores de 20 posi��es, chamados: original, pares e �mpares. Em seguida 
leia os elementos do original, teste seus valores (pares ou �mpares) e coloque nos respectivos vetores do 
in�cio para o final. Garanta que as posi��es �vazias� dos vetores pares e �mpares estejam com zero.*/
//  Entrada.: Tr�s vetores: Original, pares �mpares.
//  Sa�da...: Organizar pares e �mpares.
#include<stdio.h>
#include<stdlib.h>
#define TAM 4

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	int original[TAM], par[TAM], impar[TAM];
	int i=0, j=0, k=0, l=0;
	
//Instruções
	//printf("");
	//scanf("%",&);
	
	for(i=0; i<TAM; i++){
		printf("%d� valor: ",i+1);
		scanf("%d",&original[i]);
		
		if(original[i] % 2 == 0)
			par[j++] = original[i];//K++ e J++ � P�s incremento, portanto,
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
		printf("Vetor Par - %d� valor: %d\n",i+1,par[i]);
	}
	
	for(i=0; i<TAM; i++){
		printf("Vetor �mpar - %d� valor: %d\n",i+1,impar[i]);
	}
	
	return 0;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************
