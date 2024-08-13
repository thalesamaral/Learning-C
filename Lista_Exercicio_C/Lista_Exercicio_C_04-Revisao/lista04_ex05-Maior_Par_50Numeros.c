// Síntese
// Autor: Thales Amaral Lima
// Data: 0/0/2024
/* Objetivo: */
#include <stdio.h>

int main(void){
//Declarações
	int num,c,maior=0;
	
//Instruções
	for(c = 1; c <= 50; c++){
		printf("Digite 50 numeros: ");
		scanf("%i",&num);
		if (num%2==0){
			if (num>maior)
				maior=num;
		}
	}
	printf("O maior numero par �: %i",maior);
}
