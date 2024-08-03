//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "06/12/2021"
/*	Objetivo: recebendo a altura e o crescimento anual, de cada uma, de duas
pessoas calcule e imprima quantos anos serão necessários para que a mais baixa seja maior que a outra.*/
//  Entrada : altura e crescimento anual.
//  Saída   : ano em que zé fica maior que chico, e as alturas.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	float chico = 1.5, ze = 1.1;
	int anos;
//Instruções
	//printf("");
	//scanf("%",&);
	printf("Chico: %.2fm\n",chico);
	printf("Zé...: %.2fm\n",ze);
	
	do{
		chico += 0.02;
		ze += 0.03;
		anos ++;
	}while(ze<=chico);
	
	printf("\nChico: %.2fm\n",chico);
	printf("Zé...: %.2fm\n",ze);
	printf("Se passaram %d anos para Zé ficar maior que o Chico.", anos);
	
	return 0;
}

