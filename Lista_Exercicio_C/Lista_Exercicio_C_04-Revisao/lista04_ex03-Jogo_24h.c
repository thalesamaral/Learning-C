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

int main(void){
//Declarações
	float horaInicio=10, minutoInicio=30;
	float horaFim=10, minutoFim=29;
	float duracao;
	float totalInicio, totalFim;
	
//Instruções
	/*
	//INCIO: HORA *************
	do{
		printf("Horario - Inicio do jogo\n");
		printf("Hora...: ");
		scanf("%d",&horaInicio);
		if(horaInicio < 0 || horaInicio > 23){
			system("cls");
			printf("Valor invalido!\n\n");
		}
	}while(horaInicio < 0 || horaInicio > 23);
	
	//INCIO: MINUTO *************
	do{
		printf("Horario - Inicio do jogo\n");
		printf("Minuto.: ");
		scanf("%d",&minutoInicio);
		if(minutoInicio < 0 || minutoInicio > 59){
			system("cls");
			printf("Valor invalido!\n\n");
		}
	}while(minutoInicio < 0 || minutoInicio > 59);

	//FIM: HORA ******************
	do{
		printf("Horario - Fim do jogo\n");
		printf("Hora...: ");
		scanf("%d",&horaFim);
		if(horaFim < 0 || horaFim > 23){
			system("cls");
			printf("Valor invalido!\n\n");
		}
	}while(horaFim < 0 || horaFim > 23);

	//FIM: MINUTO ******************
	do{
		printf("Horario - Fim do jogo\n");
		printf("Minuto.: ");
		scanf("%d",&minutoFim);
		if(minutoFim < 0 || minutoFim > 59){
			system("cls");
			printf("Valor invalido!\n\n");
		}
	}while(minutoFim < 0 || minutoFim > 59);
	*/
	
	totalInicio = horaInicio + minutoInicio/60;
	totalFim = horaFim + minutoFim/60;

	printf("totalInicio: %g\n",totalInicio);
	printf("totalFim: %g\n",totalFim);

	//printf("Num = %f, intpart = %d, decpart = %f\n", num, intpart, decpart);

	if(totalInicio > totalFim){
		duracao = (24 - totalInicio) + totalFim;
		int intpart = (int)duracao;
		float decpart = duracao - intpart;
		printf("\n==================================\n");
		printf(" Duracao de %d:%gh durante 2 dias!",intpart,decpart*60);
		printf("\n==================================\n");
	}else if(totalInicio < totalFim){
		duracao = (totalFim - totalInicio);
		printf("\n==================================\n");
		printf(" Duracao de %gh durante 1 dia!",duracao);
		printf("\n==================================\n");
	}else{
		duracao = (totalFim + totalInicio);
		printf("\n==================================\n");
		printf(" Duracao de %gh durante 2 dias!",duracao);
		printf("\n==================================\n");
	}	
	return 0;
}

