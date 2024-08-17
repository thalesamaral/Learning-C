// Síntese
// Autor: Thales Amaral Lima
// Data: 0/0/2024
/* Objetivo: */
#include <stdio.h>

int main(void){
//Declara��es
	float massa,tempoFinal;
	int c,tempo=0;
//Instru��es
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

