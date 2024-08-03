//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "01/12/2021"
/*	Objetivo: */
//  Entrada.: tipo de consumidor, consumo água em m3.
//  Saída...: valor da conta.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	float consumoM3;
	float valorConta;
	int tipo;
	
//Instruções
	//printf("");
	//scanf("%",&);
	do{
		printf("Opção [1] Residencial\n");
		printf("Opção [2] Comercial\n");
		printf("Opção [3] Industrial\n");
		printf("Qual o tipo de consumidor\n");
		scanf("%d",&tipo);
	}while((tipo != 1) && (tipo != 2) && (tipo != 3));
	
	printf("\nQual o consumo de água em metros cúbicos: ");
	scanf("%f",&consumoM3);
	switch(tipo){
		case 1:
			valorConta = 5 + consumoM3*0.05;
		break;
		case 2:
			valorConta = 500;
			if(consumoM3 > 80)
				valorConta += (consumoM3-80)*0.03;
		break;
		case 3:
			valorConta = 800;
			if(consumoM3 > 100)
				valorConta += (consumoM3-100)*0.04;
		break;
		default:
			printf("Opção inválida!");
		break;	
	}
	
	printf("O valor do consumo de água foi: %.2f",valorConta);
	
	return 0;
}

