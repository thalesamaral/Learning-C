// Sintese
// Objetivo:
// Autor: Thales Amaral Lima
// Data: 0/0/2020
#include <stdio.h>
#include <conio.h>
#define tam 3

int main(void){
//Declarações
	char letra[tam];
	int c,cont=0;
//Instruções

	//printf("");
	//scanf("%i",&);

	for(c=0;c<tam;c++){
		scanf("%c",&letra[c]);
		if(letra[c]=="a"||letra[c]=="e"||letra[c]=="i"||letra[c]=="o"||letra[c]=="u");
			cont++;
	}
	printf("Vogais: %i",cont);
}

