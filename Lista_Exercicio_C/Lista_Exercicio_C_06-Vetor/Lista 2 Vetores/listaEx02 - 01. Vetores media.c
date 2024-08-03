// Sintese
// Objetivo:
// Autor: Thales Amaral Lima
// Data: 01/03/2020
#include <stdio.h>
#include <conio.h>
#define tam 20
int main(void){
//Declarações
	float nota[tam],total=0;
	int c,c1;
//Instruções
	printf("Digite a nota dos 20 alunos\n");
	for(c=0;c<tam;c++){
		scanf("%f",&nota[c]);
		total += nota[c];
	}	
	printf("Total: %f",total);
	printf("Media: %f",total/tam);
		
}

