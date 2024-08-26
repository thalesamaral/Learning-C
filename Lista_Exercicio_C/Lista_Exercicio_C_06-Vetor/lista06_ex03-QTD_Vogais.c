//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "14/12/2021"
/*	Objetivo: leia os elementos (um a um) de um vetor de 20 posi��es de caractere (char), 
conte e apresente quantas vogais existem no vetor.*/
//  Entrada.: vetor de char.
//  Sa�da...: qtd vogais.
#include<stdio.h>
#include<stdlib.h>
#define TAM 5

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	char vetor[TAM];
	int i, vogal=0;
	
//Instruções
	//printf("");
	//scanf("%",&);
	
	printf("Digite letras: ");
	
	for(i=0; i<TAM; i++){
		vetor[i] = getche();
		vetor[i] = toupper(vetor[i]);
		
		if((vetor[i] == 'A') || (vetor[i] == 'E') || (vetor[i] == 'I') || (vetor[i] == 'O') || (vetor[i] == 'U'))
			vogal++;
	}
	
	printf("\nVogais: %d",vogal);
	
	return 0;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************
