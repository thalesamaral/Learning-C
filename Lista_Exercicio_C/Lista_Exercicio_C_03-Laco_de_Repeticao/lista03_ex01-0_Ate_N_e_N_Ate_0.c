//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "04/12/2021"
/*	Objetivo: Ao informar um n�mero, imprimir de 0 at� o valor
depois imprimir do valor at� 0.*/
//  Entrada.: n�mero positivo.
//  Sa�da...: contagem de zero at� o n�mero informado, depois regressivamente.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(void){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	int num;
	int i=0;
	
//Instru��es
	//printf("");
	//scanf("%",&);
	
	do{
		printf("Digite um n�mero positivo: ");
		scanf("%d",&num);	
	}while(num<0);
	
	do{
		printf("%d\n",i);
		i++;
	}while(i<=num);
	
	printf("\n");
	
	do{
		printf("%d\n",num);
		num--;
	}while(num>=0);
	
	return 0;
}

