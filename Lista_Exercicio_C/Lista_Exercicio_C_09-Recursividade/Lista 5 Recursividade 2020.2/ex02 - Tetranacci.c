// Sintese
/* Objetivo: A série de Tetranacci inicia com quatro termos pré-determinados e a partir daí os demais são obtidos pela
soma dos quatro anteriores.  */
// Autor: Thales Amaral Lima
// Data: 26/09/2020
#include <stdio.h>
#include <conio.h>

int tetranacci(int n){
	if(n==0 || n==1 || n==2|| n==3){
		return 0;
	}
	if(n==4){
		return 1;
	}
	return tetranacci(n-1) + tetranacci(n-2) + tetranacci(n-3) + tetranacci(n-4);
}

int main(void){
//Declarações
	int num=0;
//Instruções

	printf("Digite um numero\n");
	scanf("%i",&num);
	printf("%i",tetranacci(num));
}

