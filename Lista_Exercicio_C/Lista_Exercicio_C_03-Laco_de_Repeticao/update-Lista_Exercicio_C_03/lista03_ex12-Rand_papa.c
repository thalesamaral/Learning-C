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
#include<stdlib.h>// necess�rio p/ as fun��es rand() e srand()
#define TAM 9

int main(void){
//Declarações
	int i, cont, voto0, voto1, eleicoes=0;
	float votoTotal;
	
//Instruções
	do{
		voto0 = 0;
		voto1 = 0;
		printf("\nDigite [0] 1� Cardeal\n");
		printf("Digite [1] 2� Cardeal\n");
		//scanf("%d",&voto);
		srand(time(NULL));
		
		for (i=0; i < TAM; i++){
		    /* gerando valores aleat�rios entre zero e 1 */
		    //printf("%d\n", rand() % 2);
		    cont = rand() % 2;
		    //printf("%d \n", cont);
		    
		    if(cont == 0)
		    	voto0 ++;
		    else if(cont == 1)
		    	voto1 ++;
		}
		
		votoTotal = voto0 + voto1;
		
		printf("\n1� Cardeal %d votos: %.2f%%\n",voto0,voto0*100/votoTotal);
		printf("2� Cardeal %d votos: %.2f%%\n",voto1,voto1*100/votoTotal);
		printf("==========================\n");
		eleicoes++;
	}while(((voto0*100/votoTotal) < 75) && ((voto1*100/votoTotal) < 75));
	printf("\nTotal de Elei��es: %d",eleicoes);
	return 0;
}

