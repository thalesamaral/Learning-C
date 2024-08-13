//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "08/12/2021" - "08/08/2022"
/*	Objetivo:
O Vaticano lhe encomendou um programa em C para "eleição" do Papa, onde somente 2 
Cardeais concorrerão por vez esperando que um atinja 75% dos votos, caso isto não ocorra 
é realizada uma nova votação com novos "candidatos". Seu programa em C deve, em cada 
eleição, receber o nome dos 2 Cardeais que concorrem e os votos de todos os 117 Cardeais. 
Ao final ele deve informar o nome do Papa eleito
 */
//  Entrada : somente 2 Cardeais concorrerão por vez.
//  Saída   : esperando que um atinja 75% dos votos.
#include<stdio.h>
#include<stdlib.h>// necessário p/ as funções rand() e srand()
#include<time.h>// necessário p/ função time()
#include<windows.h>// necessário p/ função Sleep()
#define TAM 9

int main(void){
//Declarações
	int i, cont, qtdVoto0, qtdVoto1, eleicoes=0;
	float votoTotal, porcentoVoto0, porcentoVoto1;
	
//Instruções
	do{
		qtdVoto0 = 0;
		qtdVoto1 = 0;
		printf("\nDigite [0] 1# Cardeal\n");
		printf("Digite [1] 2# Cardeal\n");
		//scanf("%d",&voto);
		
		//inicia o gerador de números pseudo-aleatórios usado pela função rand()
		srand(time(NULL));

		for (i=0; i < TAM; i++){
			/* gerando valores aleatórios entre zero e 1 */
			cont = rand() % 2;
			//printf(" %d", cont);
			
			if(!cont)
				qtdVoto0 ++;
			else if(cont)
				qtdVoto1 ++;
		}
		votoTotal = qtdVoto0 + qtdVoto1;
		porcentoVoto0 = qtdVoto0*100/votoTotal;
		porcentoVoto1 = qtdVoto1*100/votoTotal;

		printf("\n\n1# Cardeal %d votos: %.2f%%\n",qtdVoto0, porcentoVoto0);
		printf("2# Cardeal %d votos: %.2f%%\n",qtdVoto1, porcentoVoto1);
		printf("==========================\n");
		eleicoes++;

		//Sleep(1000); //{Timer de 1 sec para atualizar o srand()}
	}while((porcentoVoto0 < 70) && (porcentoVoto1 < 70));
	printf("\nTotal de Eleicoes: %d",eleicoes);
	return 0;
}

