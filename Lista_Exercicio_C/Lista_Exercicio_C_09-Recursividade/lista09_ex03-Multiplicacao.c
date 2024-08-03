// Sintese
// Objetivo:
// Autor: Thales Amaral Lima
// Data: 27/09/2020
#include <stdio.h>
#include <conio.h>

int multiplicador(int n1, int n2){
	
	if((n1 < 0) || (n2 < 0))
		return -1;
	else if ((n1 == 0) || (n2 == 0))
		return 0;
	
	if(n2 == 1) {
		return n1;
	}else if(n1 == 1)
		return n2;
	
	return n1 + multiplicador(n1, n2 - 1);
}

int main(void){
//Declarações
	int n1, n2, result;
//Instruções
	printf("Numeros para multiplicacao\n\n");
	printf("Digite o primeiro numero: \n");
	scanf("%i",& n1);
	printf("Digite o segundo numero: \n");
	scanf("%i",& n2);
	
	result = multiplicador(n1, n2);
	printf("%i x %i = %i",n1,n2,result);
}

