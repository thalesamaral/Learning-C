//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "11/12/2021"
/*	Objetivo: escolher uma medida p�s ou milhas,
depois imprimir o valor em pes, milhas, metros e kms.*/
//  Entrada : medida, resposta.
//  Sa�da   : pes, milhas, metro, km.
#include<stdio.h>
#include<stdlib.h>

//Protótipo de Função
void calcularPes(float);
void calcularMilhas(float);

int main(void){
//Declarações
	float medida;
	char resp;
	
//Instruções
	
	printf("Digite o valor da medida: ");
	scanf("%f",&medida);
	while(medida > 0){
		do{
			printf("\nQual o tipo de medida?\n");
			printf("[P]p�s ou milhas[M]\n");
			resp = getche();
			resp = toupper(resp);
		}while((resp != 'P') && (resp != 'M'));
		
		if(resp == 'P'){
			calcularPes(medida);
		}else{
			calcularMilhas(medida);
		}
		printf("\nDigite nova medida ou -1 para finalizar: ");
		scanf("%f",&medida);
	}
	
	return 0;
}

void calcularPes(float medida){
	float pes, milhas, metro, km;
	
	pes    = medida;
	metro  = pes/3.28;
	km     = metro/1000;
	milhas = km/1.61;
	printf("\nP�S...: %f\n",pes);
	printf("MILHAS: %f\n",milhas);
	printf("METROS: %f\n",metro);
	printf("KMs...: %f\n",km);
}

void calcularMilhas(float medida){
	float pes, milhas, metro, km;
	
	milhas = medida;
	km     = milhas*1.61;
	metro  = km*1000;
	pes    = metro*3.28;
	printf("\nMILHAS: %f\n",milhas);
	printf("P�S...: %f\n",pes);
	printf("METROS: %f\n",metro);
	printf("KMs...: %f\n",km);
}

