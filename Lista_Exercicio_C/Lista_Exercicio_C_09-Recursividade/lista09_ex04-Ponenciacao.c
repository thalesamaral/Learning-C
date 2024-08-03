// Sintese
// Objetivo:
// Autor: Thales Amaral Lima
// Data: 28/09/2020
#include <stdio.h>
#include <conio.h>

int exp(int k, int n){
	
	if((k < 0) || (n < 0))
		return -1;
	else if ((k == 0) || (n == 0))
		return 0;
	
	if(n == 1)
		return k;
	
	return k * exp(k, n - 1);
}

int main(void){
//Declarações
	int k, n, result;
//Instruções
	printf("Digite a base: ");
	scanf("%i",&k);
	printf("Digite o expoente: ");
	scanf("%i",&n);
	
	result = exp(k, n);
	printf("%i ^ %i = %i",k,n,result);
}

