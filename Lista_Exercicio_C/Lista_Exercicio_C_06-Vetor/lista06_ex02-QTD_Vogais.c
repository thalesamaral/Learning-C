//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "26/08/2024"
/*	Objetivo:
2. Faça um programa em C que leia os elementos (um a um) de um vetor de 20 posições de 
caractere (char), conte e apresente quantas vogais existem no vetor.
*/
//  Entrada.: vetor de char.
//  Saida...: qtd vogais.
#include<stdio.h>
#include<ctype.h>
#define TAM 3

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	char vetor[TAM];
	int i, qtdVogal=0;
	
//Instruções	
	printf("Digite %d letras!\n",TAM);
	
	for(i=0; i<TAM; i++){
		fflush(stdin);
		printf("Resposta: ");
		vetor[i] = getchar();
		while (getchar() != '\n');
		vetor[i] = toupper(vetor[i]);
		
		if((vetor[i] == 'A') || (vetor[i] == 'E') || (vetor[i] == 'I') || (vetor[i] == 'O') || (vetor[i] == 'U')){
			qtdVogal++;
		}			
	}
	
	printf("\nQuantidade de Vogais: %d",qtdVogal);
	
	return 0;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************
