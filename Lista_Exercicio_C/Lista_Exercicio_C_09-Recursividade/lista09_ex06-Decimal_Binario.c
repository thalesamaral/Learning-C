// Sintese
// Objetivo:
// Autor: Thales Amaral Lima
// Data: 
#include <stdio.h>
#include <conio.h>

void dec(int n){

	if(n>0){
		dec(n/2);
		printf("%i", (n%2));
	}
}

int main(void){
//Declara��es
	int n;
//Instru��es

	printf("Digite um numero para decimal\n");
	scanf("%i",&n);
	
	dec(n);
}

