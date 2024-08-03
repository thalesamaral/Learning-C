// Sintese
// Objetivo:
// Autor: Thales Amaral Lima
// Data: 28/09/2020
#include <stdio.h>
#include <conio.h>

int fat(int n){
	
	if((n==0) || (n==1))
		return 1;
	else if (n==2)
		return 2;
	
	return n * fat(n-1);
}

int main(void){
//Declarações
	int n;
//Instruções

	printf("Digite um numero\n");
	scanf("%i",&n);
	
	printf("%i",fat(n));
}

