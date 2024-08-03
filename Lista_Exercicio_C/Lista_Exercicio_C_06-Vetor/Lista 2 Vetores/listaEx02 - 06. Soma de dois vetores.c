// Sintese
// Objetivo:
// Autor: Thales Amaral Lima
// Data: 0/0/2020
#include <stdio.h>
#include <conio.h>
#define tam 3
int main(void){
//Declarações
	int c,vet01[tam],vet02[tam],vet03[tam];
//Instruções

	for(c=0;c<tam;c++){
		printf("Primeiro Vetor\n");
		scanf("%i",&vet01[c]);
		printf("Segundo Vetor\n");
		scanf("%i",&vet02[c]);
		printf("==== Soma ====\n",c);
		vet03[c]=vet01[c]+vet02[c];
	}
	
	printf("Soma dos vetores\n");
	for(c=0;c<tam;c++)
		printf("%i\n",vet03[c]);
}

