//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "17/08/2024"
/*	Objetivo:
Escrever um programa em C que lê a hora de início e hora de término de um jogo, ambas 
subdivididas em dois valores distintos: horas e minutos. Calcular e escrever a duração do 
jogo, também em horas e minutos, considerando que o tempo máximo de duração de um 
jogo é de 24 horas e que o jogo pode iniciar em um dia e terminar no dia seguinte.
*/
#include<stdio.h>
#include<stdlib.h> //system();
#define BARRA_DUPLA printf("=============================================\n");

int main(void){
//Declarações
	float horaInicio, minutoInicio;
	float horaFim, minutoFim;
	float duracao;
	float totalInicio, totalFim;
	
//Instruções
	
	//INCIO: HORA *************
	printf("Inicio do jogo\n");
	do{
		printf(" Hora...: ");
		scanf("%f",&horaInicio);
		if(horaInicio < 0 || horaInicio > 23){
			system("cls");
			printf("Valor invalido!\n\n");
			printf("Inicio do jogo\n");
		}
	}while(horaInicio < 0 || horaInicio > 23);
	
	//INCIO: MINUTO *************
	do{
		printf(" Minuto.: ");
		scanf("%f",&minutoInicio);
		if(minutoInicio < 0 || minutoInicio > 59){
			system("cls");
			printf("Valor invalido!\n\n");
			printf("Inicio do jogo\n");
		}
	}while(minutoInicio < 0 || minutoInicio > 59);

	//FIM: HORA ******************
	printf("\nFinal do jogo\n");
	do{
		printf(" Hora...: ");
		scanf("%f",&horaFim);
		if(horaFim < 0 || horaFim > 23){
			system("cls");
			printf("Valor invalido!\n\n");
			printf("Final do jogo\n");
		}
	}while(horaFim < 0 || horaFim > 23);

	//FIM: MINUTO ******************
	do{
		printf(" Minuto.: ");
		scanf("%f",&minutoFim);
		if(minutoFim < 0 || minutoFim > 59){
			system("cls");
			printf("Valor invalido!\n\n");
			printf("Final do jogo\n");
		}
	}while(minutoFim < 0 || minutoFim > 59);
	
	system("cls");
	BARRA_DUPLA
	printf(" Inicio do jogo.: %.0f Hora(s) e %.0f Minuto(s)\n",horaInicio, minutoInicio);
	printf(" Final do jogo..: %.0f Hora(s) e %.0f Minuto(s)\n",horaFim, minutoFim);

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
	printf(" Duracao de %d Hora(s) e %.0f Minuto(s)\n",intpart,decpart*60);
	BARRA_DUPLA
	return 0;
}

