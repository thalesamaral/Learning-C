//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "06/12/2021"
/*	Objetivo:
Chico tem 1,50 metros e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 
3 centímetros por ano. Faça um programa em C que recebendo a altura e o crescimento 
anual, de cada uma, de duas pessoas calcule e imprima quantos anos serão necessários 
para que a mais baixa seja maior que a outra. Caso isto não ocorra em 100 anos informar 
mensagem de impossibilidade.
*/
#include<stdio.h>
#include<stdlib.h>

int main(void){
//Declarações
	float chico = 1.5, ze = 1.1;
	int anos;
//Instruções
	printf("Chico: %.2fm\n",chico);
	printf("Z�...: %.2fm\n",ze);
	
	do{
		chico += 0.02;
		ze += 0.03;
		anos ++;
	}while(ze<=chico);
	
	printf("\nChico: %.2fm\n",chico);
	printf("Z�...: %.2fm\n",ze);
	printf("Se passaram %d anos para Z� ficar maior que o Chico.", anos);
	
	return 0;
}

