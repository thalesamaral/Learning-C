//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "15/12/2021"
/*	Objetivo: leia um vetor de 20 posi��es, verifique se existem valores iguais dentro dele e 
os escreva na tela*/
//  Entrada.: um vetor de int.
//  Sa�da...: imprime valores iguais.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAM 5

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	int i=0, j=0, vet[TAM], flag=0;
	
//Instruções
	//printf("");
	//scanf("%",&);
	
	for(i=0; i<TAM; i++){
		printf("Vetor - %d� valor: ",i+1);
		scanf("%d",&vet[i]);
	}
	
	for(i=0; i<TAM; i++){
		for(j=i+1; j<TAM; j++){
			if(vet[i]==vet[j]){
				printf("\n%d� valor: %d",i+1, vet[i]);
				printf("\n%d� valor: %d",j+1, vet[j]);
				flag=1;
			}
		}
	}
	
	if(!flag)
		printf("\nN�o h� repetidos!");
		
	return 0;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************



