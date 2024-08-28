//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "27/08/2024"
/*	Objetivo:
8. Faça um programa em C que leia um vetor de 20 posições, verifique se existem valores 
iguais dentro dele e os escreva na tela.
*/
//  Entrada.: um vetor de int.
//  Saida...: imprime valores iguais.
#include<stdio.h>
#define TAM 5

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	int i, j, vet[TAM], flagTemRepetido, flagJaRepetiu;
	
//Instruções	
	printf("\nVetor\n");
	for(i=0; i<TAM; i++){
		printf("%do Valor: ",i+1);
		scanf("%d",&vet[i]);
	}
	
	for(i=0; i<TAM-1; i++){
		flagJaRepetiu = 0;

		/*
		Verifica todas as posições de J até o I atual
		Caso tenha algum repetido, quer dizer que já foi imprimido.
		*/
		for(j=0; j<i; j++){
			if(vet[i] == vet[j]){
				flagJaRepetiu = 1;
				flagTemRepetido = 1;
				break;
			}
		}

		/*
		Verifica o I atual com todas as posições de J que começa em i+1
		*/
		if(!flagJaRepetiu){
			for(j=i+1; j<TAM; j++){
				if(vet[i] == vet[j]){
					printf("\nValor repetido: %d",vet[i]);
					break;
				}
			}
		}
	}

	if(!flagTemRepetido){
		printf("\nNao tem repetidos!\n");
	}
		
	return 0;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************
