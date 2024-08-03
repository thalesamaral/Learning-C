// Sintese
// Objetivo:
// Autor: Thales Amaral Lima
// Data: 28/02/2020
#include <stdio.h>
#include <conio.h>
int main(void){
//Declarações
	float massa,tempoFinal;
	int c,tempo=0;
//Instruções
	//printf("");
	//scanf("%i",&);
	
	printf("Massa inicial: ");
	scanf("%f",&massa);
	
	while(massa>=0.5){
		massa -= massa/2;
		tempo += 50;
	}
	tempoFinal = tempo/60;
	printf("O tempo final para a massa chegar em 0.5: %f",tempoFinal);

}

