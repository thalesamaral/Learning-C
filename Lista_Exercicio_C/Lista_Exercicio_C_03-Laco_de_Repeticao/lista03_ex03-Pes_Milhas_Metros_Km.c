//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "05/12/2021"
/*	Objetivo:
Faça um programa em C que receba várias medidas, cada medida vem acompanhada de 
uma letra indicando se a medida está em pés (P) ou milhas (M), então somar as medidas e 
informar o resultado em pés, milhas, metros e quilômetros, respectivamente. Lembrando que 
há 3.28 pés em um metro e 1.61 quilômetros em uma milha. O programa em C deve encerrar 
a leitura de medidas assim que for digitado um valor negativo.
*/
#include<stdio.h>
#include<stdlib.h>

int main(void){
//Declarações
	float medida, pes, milhas, metro, km;
	char resp;
	
//Instruções
	printf("Digite o valor da medida: ");
	scanf("%f",&medida);
	while(medida >= 0){
		do{
			printf("\nQual o tipo de medida?\n");
			printf("[P]pes ou milhas[M]\n");
			resp = getche();
			resp = toupper(resp);
		}while((resp != 'P') && (resp != 'M'));
		
		if(resp == 'P'){
			pes    = medida;
			metro  = pes/3.28;
			km     = metro/1000;
			milhas = km/1.61;
		}else{
			milhas = medida;
			km     = milhas*1.61;
			metro  = km*1000;
			pes    = metro*3.28;
		}
		printf("\nPES...: %.4f\n",pes);
		printf("METROS: %.4f\n",metro);
		printf("KMs...: %.4f\n",km);
		printf("MILHAS: %.4f\n",milhas);

		printf("\nDigite nova medida ou -1 para finalizar: ");
		scanf("%f",&medida);
	}
	
	printf("\nValor negativo foi digitado!\n\n");
	
	return 0;
}

