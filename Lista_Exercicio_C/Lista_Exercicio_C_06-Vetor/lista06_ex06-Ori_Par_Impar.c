//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "27/08/2024"
/*	Objetivo:
6. Faça um programa em C que crie 3 vetores de 20 posições, chamados: original, pares e 
ímpares. Em seguida leia os elementos do original, teste seus valores (pares ou ímpares) e 
coloque nos respectivos vetores do início para o final. Garanta que as posições “vazias” dos 
vetores pares e ímpares estejam com zero.
*/
//  Entrada.: Tres vetores: Original, pares impares.
//  Saida...: Separar pares e impares.
#include<stdio.h>
#define TAM 4

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	int original[TAM], par[TAM], impar[TAM];
	int i=0, j=0, k=0, l=0;
	
//Instruções
	printf("\nVetor Original\n");
	for(i=0; i<TAM; i++){
		printf("%do Valor: ",i+1);
		scanf("%d",&original[i]);
		
		/*
		J++ e K++ eh Pos incremento, portanto,
		primeiro usa o valor depois incrementa.
		*/
		if(original[i] % 2 == 0){
			par[j++] = original[i];
		}else{
			impar[k++] = original[i];
		}
		/*
		Quando acaba o FOR principal, J e K são as posições finais de Par e Impar
		portanto, L começa a partir de J ou K, e adiciona 0 nas posições até TAM.
		*/
		if(i == TAM-1){
			for(l=j; l<TAM; l++){
				par[l] = 0;
			}
			for(l=k; l<TAM; l++){
				impar[l] = 0;
			}
		}
	}
	
	printf("\nVetor Par\n");
	for(i=0; i<TAM; i++){
		printf("%do Valor: %d\n",i+1,par[i]);
	}
	
	printf("\nVetor Impar\n");
	for(i=0; i<TAM; i++){
		printf("%do Valor: %d\n",i+1,impar[i]);
	}
	
	return 0;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************

/*
	OUTRA OPÇÃO: No inicio, poderia adicionar 0 nos vetores Par e Impar

	for(i=0; i<TAM; i++){
		printf("%do Valor: ",i+1);
		scanf("%d",&original[i]);
		par[i] = impar[i] = 0;
	}
*/