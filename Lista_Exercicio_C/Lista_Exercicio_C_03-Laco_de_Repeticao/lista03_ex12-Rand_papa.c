//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "08/12/2021" - "08/08/2022"
/*	Objetivo: em cada eleição, receber o nome dos 2 Cardeais que concorrem e os votos de todos os 117 Cardeais.
 Ao final ele deve informar o nome do Papa eleito.*/
//  Entrada : somente 2 Cardeais concorrerão por vez.
//  Saída   : esperando que um atinja 75% dos votos.
#include<stdio.h>
#include<stdlib.h>// necessário p/ as funções rand() e srand()
#include<locale.h>
#define TAM 9

int main(void){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	int i, cont, voto0, voto1, eleicoes=0;
	float votoTotal;
	
//Instruções
	//printf("");
	//scanf("%",&);
	
	do{
		voto0 = 0;
		voto1 = 0;
		printf("\nDigite [0] 1º Cardeal\n");
		printf("Digite [1] 2º Cardeal\n");
		//scanf("%d",&voto);
		srand(time(NULL));
		
		for (i=0; i < TAM; i++){
		    /* gerando valores aleatórios entre zero e 1 */
		    //printf("%d\n", rand() % 2);
		    cont = rand() % 2;
		    //printf("%d \n", cont);
		    
		    if(cont == 0)
		    	voto0 ++;
		    else if(cont == 1)
		    	voto1 ++;
		}
		
		votoTotal = voto0 + voto1;
		
		printf("\n1º Cardeal %d votos: %.2f%%\n",voto0,voto0*100/votoTotal);
		printf("2º Cardeal %d votos: %.2f%%\n",voto1,voto1*100/votoTotal);
		printf("==========================\n");
		eleicoes++;
	}while(((voto0*100/votoTotal) < 75) && ((voto1*100/votoTotal) < 75));
	printf("\nTotal de Eleições: %d",eleicoes);
	return 0;
}

