//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "22/08/2024"
/*	Objetivo:
7. Faça um programa em C que contenha subprograma. É necessário que seu programa como 
um todo leia várias medidas, cada medida vem acompanhada de uma letra indicando se a 
medida está em pés (P) ou milhas (M), então some as medidas e informe o resultado em 
pés, milhas, metros e quilômetros, respectivamente. Lembrando que há 3.28 pés em um 
metro e 1.61 quilômetros em uma milha. O programa deve encerrar a leitura de medidas 
assim que for digitado um valor negativo.
*/
#include<stdio.h>
#include<ctype.h> //toupper();

//Protótipo de Função
void calcula_pes(float);
void calcula_milhas(float);
void valida_numero(float*);
void valida_resp(char*);

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	float medida;
	char resposta;
	
//Instruções
	
	valida_numero(&medida);
	while(medida > 0){
		valida_resp(&resposta);
		
		if(resposta == 'P'){
			calcula_pes(medida);
		}else if(resposta == 'M'){
			calcula_milhas(medida);
		}
		
		valida_numero(&medida);
	}
	
	return 0;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************

void valida_numero(float*medida){	
	printf("\nDigite o valor da medida: ");
	scanf("%f",&*medida);
	if(*medida < 0){
		printf("\nNumero negativo. Programa finalizado!\n\n");
	}
}

void valida_resp(char *resposta){
	
	do{
		fflush(stdin);
		printf("\nQual o tipo de medida?\n");
		printf("[P]Pes ou [M]Milhas\n");
		*resposta = getchar();
		while (getchar() != '\n');
		*resposta = toupper(*resposta);
	}while((*resposta != 'P') && (*resposta != 'M'));
}

void calcula_pes(float medida){
	float pes, milhas, metro, km;
	
	pes    = medida;
	metro  = pes/3.28;
	km     = metro/1000;
	milhas = km/1.61;
	printf("\nPES...: %g\n",pes);
	printf("MILHAS: %g\n",milhas);
	printf("METROS: %g\n",metro);
	printf("KMs...: %g\n",km);
}

void calcula_milhas(float medida){
	float pes, milhas, metro, km;
	
	milhas = medida;
	km     = milhas*1.61;
	metro  = km*1000;
	pes    = metro*3.28;
	printf("\nMILHAS: %g\n",milhas);
	printf("PES...: %g\n",pes);
	printf("METROS: %g\n",metro);
	printf("KMs...: %g\n",km);
}

