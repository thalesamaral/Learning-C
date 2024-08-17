//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "15/08/2024"
/*	Objetivo:
Escrever um programa em C que lê a hora de início e hora de término de um jogo, ambas 
subdivididas em dois valores distintos: horas e minutos. Calcular e escrever a duração do 
jogo, também em horas e minutos, considerando que o tempo máximo de duração de um 
jogo é de 24 horas e que o jogo pode iniciar em um dia e terminar no dia seguinte.
*/
#include<stdio.h>
#include<stdlib.h> //system();
#define BARRA_DUPLA printf("\n==================================\n");

int main(void){
//Declarações
	float horaInicio=9, minutoInicio=1;
	float horaFim=9, minutoFim=0;
	float duracao;
	float totalInicio, totalFim;
	
//Instruções
	
	//INCIO: HORA *************
	do{
		printf("Horario - Inicio do jogo\n");
		printf(" Hora...: ");
		scanf("%f",&horaInicio);
		if(horaInicio < 0 || horaInicio > 23){
			system("cls");
			printf("Valor invalido!\n\n");
		}
	}while(horaInicio < 0 || horaInicio > 23);
	
	//INCIO: MINUTO *************
	do{
		printf("Horario - Inicio do jogo\n");
		printf(" Minuto.: ");
		scanf("%f",&minutoInicio);
		if(minutoInicio < 0 || minutoInicio > 59){
			system("cls");
			printf("Valor invalido!\n\n");
		}
	}while(minutoInicio < 0 || minutoInicio > 59);

	//FIM: HORA ******************
	do{
		printf("\nHorario - Final do jogo\n");
		printf(" Hora...: ");
		scanf("%f",&horaFim);
		if(horaFim < 0 || horaFim > 23){
			system("cls");
			printf("Valor invalido!\n\n");
		}
	}while(horaFim < 0 || horaFim > 23);

	//FIM: MINUTO ******************
	do{
		printf("Horario - Final do jogo\n");
		printf(" Minuto.: ");
		scanf("%f",&minutoFim);
		if(minutoFim < 0 || minutoFim > 59){
			system("cls");
			printf("Valor invalido!\n\n");
		}
	}while(minutoFim < 0 || minutoFim > 59);
	
	printf("\nHorario - Inicio do jogo: %.0f:%.0f\n",horaInicio, minutoInicio);
	printf("Horario - Final do jogo.: %.0f:%.0f\n",horaFim, minutoFim);

	totalInicio = horaInicio + minutoInicio/60;
	totalFim = horaFim + minutoFim/60;

	if(totalInicio >= totalFim){
		duracao = (24 - totalInicio) + totalFim;
		BARRA_DUPLA
		printf(" Durante 2 dias!\n");
	}else if(totalInicio < totalFim){
		duracao = (totalFim - totalInicio);
		BARRA_DUPLA
		printf(" Durante 1 dia!\n");
	}
	
	int intpart = (int)duracao;
	float decpart = duracao - intpart;
	printf(" Duracao de %d:%.0fh",intpart,decpart*60);
	BARRA_DUPLA
	return 0;
}

