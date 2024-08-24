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
int valor_ou_fim(float*);
void valida_resposta(char*);

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	float medida;
	char resposta;
	
//Instruções
	
	printf("Digite o valor da medida\n");
	printf("Ou, digite -1 para finalizar!\n");
	
	while(valor_ou_fim(&medida)){
		valida_resposta(&resposta);
		
		if(resposta == 'P'){
			calcula_pes(medida);
		}else if(resposta == 'M'){
			calcula_milhas(medida);
		}
	}
	
	return 0;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************

int valor_ou_fim(float *valorRef){
	float valor;

	printf("\nInsira o valor: ");
	scanf("%f",&valor);

	if(valor < 0){
		printf("\nNumero negativo. Programa finalizado!\n\n");
		return 0;
	}else{
		*valorRef = valor;
		return 1;
	}
}

void valida_resposta(char *resposta){
	
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

