//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "05/08/2022"
/*	Objetivo: */
//  Entrada.: hora de inicio; e de fim.
//  Sa�da...: dura��o total.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	int horaInicio;
	int horaFim;
	int duracao;
	
//Instru��es
	//printf("");
	//scanf("%",&);
	
	do{
		printf("\nQual a hora de in�cio do jogo: ");
		scanf("%d",&horaInicio);
		
		printf("\nQual a hora de fim do jogo: ");
		scanf("%d",&horaFim);
		
		if(horaInicio > horaFim){
			duracao = (24 - horaInicio) + horaFim;
			printf("\n==================================\n");
			printf("  Dura��o de %dh durante 2 dias!",duracao);
			printf("\n==================================\n");
		}else if(horaInicio < horaFim){
			duracao = (horaFim - horaInicio);
			printf("\n==================================\n");
			printf("  Dura��o de %dh durante 1 dia!",duracao);
			printf("\n==================================\n");
		}else{
			duracao = (horaFim + horaInicio);
			printf("\n==================================\n");
			printf("  Dura��o de %dh durante 2 dias!",duracao);
			printf("\n==================================\n");
		}
	}while(duracao>24);
	
	return 0;
}

