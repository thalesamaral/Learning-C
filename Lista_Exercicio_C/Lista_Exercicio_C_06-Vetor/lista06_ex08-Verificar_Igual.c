//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "15/12/2021"
/*	Objetivo:
8. Faça um programa em C que leia um vetor de 20 posições, verifique se existem valores 
iguais dentro dele e os escreva na tela
*/
//  Entrada.: um vetor de int.
//  Saida...: imprime valores iguais.
#include<stdio.h>
#define TAM 5

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	int i=0, j=0, vet[TAM], flag=0, valorIgual;
	
//Instruções	
	printf("\nVetor\n");
	for(i=0; i<TAM; i++){
		printf("%do Valor: ",i+1);
		scanf("%d",&vet[i]);
	}
	
	for(i=0; i<TAM; i++){
		for(j=i+1; j<TAM; j++){
			if(vet[i] == vet[j]){
				//valorIgual = vet[i];
				printf("\n%do Valor: %d",i+1, vet[i]);
				printf("\n%do Valor: %d\n",j+1, vet[j]);
				flag=1;
				break;
			}
		}
	}
	
	if(!flag){
		printf("\nNao tem repetidos!\n");
	}
		
	return 0;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************
