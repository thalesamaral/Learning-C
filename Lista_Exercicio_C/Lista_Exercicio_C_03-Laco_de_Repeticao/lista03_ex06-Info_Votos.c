//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "06/12/2021"
/*	Objetivo: Elei��o e estat�sticas dos votos*/
//  Entrada : voto.
//  Sa�da   : estat�sticas dos votos.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	float jps, pjs, sp, nulo;
	int voto, qtdVotos;
//Instru��es
	//printf("");
	//scanf("%",&);
	
	do{
		printf("=============================================\n");
		printf("Digite o respectivo N� para seu voto\n");
		printf("12 - Jos� Pedro da Silva\n");
		printf("23 - Pedro Jos� da Silva\n");
		printf("34 - Silvio das Pedras\n");
		printf("Digite outro N� para Nulo ou 0 para finalizar\n");
		printf("=============================================\n");
		scanf("%d",&voto);
		
		switch(voto){
			case 12:
				jps++;
				printf("\nJos� Pedro da Silva\n");
				printf("--------------------\n\n");
			break;
			case 23:
				pjs++;
				printf("\nPedro Jos� da Silva\n");
				printf("--------------------\n\n");
			break;
			case 34:
				sp++;
				printf("\nSilvio das Pedras\n");
				printf("--------------------\n\n");
			break;
			default:
				if(voto>0){
					nulo++;
					printf("\nVoto Nulo.\n");
					printf("=============================================\n\n");
				}
		}
	}while(voto>0);
	
	qtdVotos = jps + pjs + sp + nulo;
	printf("\n=============================================\n");
	printf("Total de votos - %d\n",qtdVotos);
	printf("Jos� Pedro da Silva.: %.2f%%\n",(jps*100)/qtdVotos);
	printf("Pedro Jos� da Silva.: %.2f%%\n",(pjs*100)/qtdVotos);
	printf("Silvio das Pedras...: %.2f%%\n",(sp*100)/qtdVotos);
	printf("Voto Nulo...........: %.2f%%\n",(nulo*100)/qtdVotos);
	printf("=============================================\n\n");
	
	printf("O grande Vencedor!\n");
	if((jps>pjs)&&(jps>sp))
		printf("Jos� Pedro da Silva\n");
	else if((pjs>jps)&&(pjs>sp))
		printf("Pedro Jos� da Silva\n");
	else if((sp>jps)&&(sp>pjs))
		printf("Silvio das Pedras\n");
	else if((nulo>jps)&&(nulo>pjs)&&(nulo>sp))
		printf("Deu Nulo :)");
	else
		printf("Deu empate :)");
	
	return 0;
}

