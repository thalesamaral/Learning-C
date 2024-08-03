// Sintese
/*Objetivo: Crie uma funcao recursiva que receba um numero
inteiro positivo N e calcule o somat�rio dos n�meros de 1 a N */
// Autor: Thales Amaral Lima
// Data: 26/09/2020
#include <stdio.h>
#include <conio.h>

int soma(int n){
	if(n==1) {
		return 1;
	}
	return n + soma(n-1);
}

int main(void){
//Declara��es
	int num;
//Instru��es

	printf("Digite um numero\n");
	scanf("%i",&num);
	
	printf("%i",soma(num));
}
