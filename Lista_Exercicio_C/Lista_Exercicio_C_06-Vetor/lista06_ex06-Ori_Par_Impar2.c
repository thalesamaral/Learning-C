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
#define TAM 3

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	int original[TAM], par[TAM], impar[TAM];//par e �mpar [TAM]={0,0,0}
	int i=0, j=0, k=0;
	
//Instruções
	//printf("");
	//scanf("%",&);
	
	for(i=0; i<TAM; i++){
		printf("%d� valor: ",i+1);
		scanf("%d",&original[i]);
		par[i] = impar[i] = 0;
	}
	
	for(i=0; i<TAM; i++){
		if(original[i] % 2 == 0)
			par[j++] = original[i];//K e J++ � P�s incremento, portanto,
		else
			impar[k++] = original[i];//primeiro usa o valor depois incrementa.	
	}
	
	printf("Vetor Par\n");
	for(i=0; i<TAM; i++){
		printf("%d, ",par[i]);
	}
	
	printf("\nVetor �mpar\n");
	for(i=0; i<TAM; i++){
		printf("%d, ",impar[i]);
	}
	
	return 0;
}
