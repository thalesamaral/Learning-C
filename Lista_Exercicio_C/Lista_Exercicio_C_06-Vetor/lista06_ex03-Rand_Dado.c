//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "27/08/2024"
/*	Objetivo:
3. Tentando descobrir se um dado era viciado, um honesto dono de cassino o lançou 100 vezes. 
Você deve apresentar o número de ocorrências de cada face, ou seja, em quantos dos 
lançamentos ocorreu 1, 2, 3.., 6. Para “informar” o valor que saiu em cada lançamento do 
dado você deve utilizar uma função que gera um valor aleatório entre 1 e 6. Pesquise para 
saber qual função faz isto em C e como utilizá-la.
*/
//  Entrada.: dado quantidade de jogadas; Valores de 1 a 6 de forma aleatoria.
//  Saida...: quantidade de ocorrencias de 1 a 6.
#include<stdio.h>
#include<stdlib.h> //necessário p/ as funções rand() e srand()
#include<time.h> //necessário p/ função time()

#define TAM 10

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	int i, dado[TAM];
	int um=0, dois=0, tres=0, quatro=0, cinco=0, seis=0;
	
//Instruções

	srand(time(NULL));
		
	for(i=0; i<TAM; i++){
		
		dado[i] = (rand() % 6) + 1; //por comecar de 0 até 5, adicionei +1.
		switch(dado[i]){
			case 1:
				um++;
			break;
			case 2:
				dois++;
			break;
			case 3:
				tres++;
			break;
			case 4:
				quatro++;
			break;
			case 5:
				cinco++;
			break;
			case 6:
				seis++;
			break;
		}
	}
	
	for(i=0; i<TAM; i++){
		printf("\n%do Valor do Dado: %d",i+1,dado[i]);
	}
	
	printf("\n\nQuantidade de cada valor\n") ;

	printf(" 1) %d;\n 2) %d;\n 3) %d;\n 4) %d;\n 5) %d;\n 6) %d;\n",um,dois,tres,quatro,cinco,seis);
	
	return 0;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************
