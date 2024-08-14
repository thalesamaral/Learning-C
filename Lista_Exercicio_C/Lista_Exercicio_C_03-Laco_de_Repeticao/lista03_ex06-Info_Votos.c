//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "11/08/2024"
/*	Objetivo:
Uma cidade realizará eleições para prefeito em outubro e não confia na urna eletrônica 
desenvolvida pelo TSE. Assim, consegue autorização junto ao TRE para desenvolver sua 
própria urna eletrônica e lhe contrata para desenvolver o programa em C desta urna. Sabe-se que esta cidade somente realizará eleição para prefeito e que terá apenas 3 candidatos 
com os números:
	o 12 - José Pedro da Silva;
	o 23 - Pedro José da Silva;
	o 34 - Silvio das Pedras;
Seu programa em C deve receber o voto de cada candidato (número do candidato), 
encerrando quando for digitado 0 (zero) para o número. Para cada voto deve ser 
apresentado o nome do candidato e ao final da eleição deve ser apresentado o nome do 
prefeito vitorioso e o percentual de votos de cada candidato. Considere que não haverá 
empate (não precisa tratar esta possibilidade em seu código) e que os eleitores sempre 
votarão em um candidato ou nulo (informando qualquer outro número), não havendo voto 
em branco.
*/
#include<stdio.h>
#define BARRA_DUPLA printf("==================================================\n");
#define BARRA_SIMPLES printf("--------------------\n");

int main(void){
//Declarações
	float cod12, cod23, cod34, nulo;
	int voto, qtdVotos;
//Instruções
	do{
		BARRA_DUPLA
		printf("Digite o respectivo codigo para seu voto\n");
		printf("[12] Jose Pedro da Silva\n");
		printf("[23] Pedro Jose da Silva\n");
		printf("[34] Silvio das Pedras\n");
		printf("Digite outro codigo para Nulo ou 0 para finalizar\n");
		BARRA_DUPLA
		printf("Resposta: ");
		scanf("%d",&voto);
		
		switch(voto){
			case 12:
				cod12++;
				BARRA_SIMPLES
				printf("Jose Pedro da Silva\n");
				BARRA_SIMPLES
			break;
			case 23:
				cod23++;
				BARRA_SIMPLES
				printf("Pedro Jose da Silva\n");
				BARRA_SIMPLES
			break;
			case 34:
				cod34++;
				BARRA_SIMPLES
				printf("Silvio das Pedras\n");
				BARRA_SIMPLES
			break;
			default:
				if(voto>0){
					nulo++;
					BARRA_SIMPLES
					printf("Voto Nulo.\n");
					BARRA_SIMPLES
				}
		}
		printf("\n");
	}while(voto>0);

	qtdVotos = cod12 + cod23 + cod34 + nulo;
	
	if(qtdVotos > 0){
		printf("\nTotal de votos: %d\n",qtdVotos);
		BARRA_DUPLA
		printf("Jose Pedro da Silva.: %.2f%%\n",(cod12*100)/qtdVotos);
		printf("Pedro Jose da Silva.: %.2f%%\n",(cod23*100)/qtdVotos);
		printf("Silvio das Pedras...: %.2f%%\n",(cod34*100)/qtdVotos);
		printf("Voto Nulo...........: %.2f%%\n",(nulo*100)/qtdVotos);
		BARRA_DUPLA
		
		printf("\nRESULTADO: ");
		if((cod12>cod23)&&(cod12>cod34)&&(cod12>nulo))
			printf("Jose Pedro da Silva\n");
		else if((cod23>cod12)&&(cod23>cod34)&&(cod23>nulo))
			printf("Pedro Jose da Silva\n");
		else if((cod34>cod12)&&(cod34>cod23)&&(cod34>nulo))
			printf("Silvio das Pedras\n");
		else if((nulo>cod12)&&(nulo>cod23)&&(nulo>cod34))
			printf("Deu Nulo!\n");
		else
			printf("Deu empate!\n");
	}else{
		printf("\nTotal de votos: %d\n",qtdVotos);
	}
	
	return 0;
}

