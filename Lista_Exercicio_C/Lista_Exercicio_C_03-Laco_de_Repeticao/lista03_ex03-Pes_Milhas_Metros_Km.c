//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "05/12/2021"
/*	Objetivo: escolher uma medida p�s ou milhas,
depois imprimir o valor em pes, milhas, metros e kms.*/
//  Entrada : medida, resposta.
//  Sa�da   : pes, milhas, metro, km.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	float medida, pes, milhas, metro, km;
	char resp;
	
//Instru��es
	//printf("");
	//scanf("%",&);
	
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
			pes    = medida;
			metro  = pes/3.28;
			km     = metro/1000;
			milhas = km/1.61;
			printf("\nP�S...: %.2f\n",pes);
			printf("MILHAS: %.2f\n",milhas);
		}else{
			milhas = medida;
			km     = milhas*1.61;
			metro  = km*1000;
			pes    = metro*3.28;
			printf("\nMILHAS: %.2f\n",milhas);
			printf("P�S...: %.2f\n",pes);
		}
		
		printf("METROS: %.2f\n",metro);
		printf("KMs...: %.2f\n",km);
		
		printf("\nDigite nova medida ou -1 para finalizar: ");
		scanf("%f",&medida);
	}
	
	
	return 0;
}

