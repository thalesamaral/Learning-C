// Sintese
// Objetivo: Ler 50 numeros e ver quantos estão entre 10 e 100
// Autor: Thales Amaral Lima
// Data: 28/02/2020
#include <stdio.h>
#include <conio.h>
int main(void){
//Declarações
	int num,c,quant=0;
//Instruções

	for(c = 1; c <= 3; c++){
		printf("Digite 50 numeros: ");
		scanf("%i",&num);
		if (num>=10 && num <= 100)
			quant ++;
	}
	printf("Quantidade de numeros entre 10 e 100: %i",quant);
}

