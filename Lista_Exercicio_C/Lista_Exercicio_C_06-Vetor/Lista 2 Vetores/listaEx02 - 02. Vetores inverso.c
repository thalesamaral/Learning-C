// Sintese
// Objetivo:
// Autor: Thales Amaral Lima
// Data: 01/03/2020
#include <stdio.h>
#include <conio.h>
#define tam 3
int main(void){
//Declara��es
	float nota[tam];
	int c,c1;
//Instru��es

	for(c=0;c<tam;c++)
		scanf("%f",&nota[c]);
	
	for(c=tam-1;c>=0;c--)
		printf("%f\n",nota[c]);
}

