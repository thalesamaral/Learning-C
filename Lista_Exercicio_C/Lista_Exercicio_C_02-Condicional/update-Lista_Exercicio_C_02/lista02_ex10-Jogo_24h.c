//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "05/08/2022"
/*	Objetivo:
Faça um programa em C que receba a hora de início e a hora de fim de um jogo de xadrez 
(considere apenas horas inteiras, sem os minutos), calcule e imprima a duração do jogo em 
horas. Sabe-se que o tempo máximo de duração do jogo é de 24 horas e que o jogo pode 
iniciar em um dia e terminar no dia seguinte.
*/
#include<stdio.h>
#include<stdlib.h>

int main(void){
//Declarações
	int horaInicio;
	int horaFim;
	int duracao;
	
//Instruções
	do{
		printf("\nQual a hora de inicio do jogo: ");
		scanf("%d",&horaInicio);
		
		printf("\nQual a hora de fim do jogo: ");
		scanf("%d",&horaFim);
		
		if(horaInicio > horaFim){
			duracao = (24 - horaInicio) + horaFim;
			printf("\n==================================\n");
			printf("  Duracao de %dh durante 2 dias!",duracao);
			printf("\n==================================\n");
		}else if(horaInicio < horaFim){
			duracao = (horaFim - horaInicio);
			printf("\n==================================\n");
			printf("  Duracao de %dh durante 1 dia!",duracao);
			printf("\n==================================\n");
		}else{
			duracao = (horaFim + horaInicio);
			printf("\n==================================\n");
			printf("  Duracao de %dh durante 2 dias!",duracao);
			printf("\n==================================\n");
		}
	}while(duracao>24);
	
	return 0;
}

