//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "08/08/2024"
/*	Objetivo:
Faça um programa em C que receba várias medidas, cada medida vem acompanhada de 
uma letra indicando se a medida está em pés (P) ou milhas (M), então somar as medidas e 
informar o resultado em pés, milhas, metros e quilômetros, respectivamente. Lembrando que 
há 3.28 pés em um metro e 1.61 quilômetros em uma milha. O programa em C deve encerrar 
a leitura de medidas assim que for digitado um valor negativo.
*/
#include<stdio.h>

int main(void){
//Declarações
	float medida, pes, milhas, metro, km;
	char resp;
	
//Instruções
	printf("Digite o valor da medida: ");
	scanf("%f",&medida);

	while(medida >= 0){
		printf("Digite [P] para Pes\n");
		printf("Digite [M] para milhas\n");
		printf("Resposta: ");
    	fflush(stdin); //Limpa o Buffer
		scanf("%c", &resp);

		if(resp == 'P'){
			pes    = medida;
			metro  = pes/3.28;
			km     = metro/1000;
			milhas = km/1.61;
		}else if(resp == 'M'){
			milhas = medida;
			km     = milhas*1.61;
			metro  = km*1000;
			pes    = metro*3.28;
		}else{
			printf("Invalido. Digite [P] ou [M]!!!\n");
		}
		if(resp == 'P' || resp == 'M'){
			printf("\nPES...: %f\n",pes);
			printf("METROS: %f\n",metro);
			printf("KMs...: %f\n",km);
			printf("MILHAS: %f\n",milhas);
		}
		
		printf("\nDigite nova medida ou -1 para finalizar: ");
		scanf("%f",&medida);
	}
	
	printf("\nValor negativo, programa encerrado!\n\n");
	
	return 0;
}

