//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "10/12/2021"
/*	Objetivo: leia um número inteiro N e imprima a soma dos números múltiplos de 3 do intervalo de de 0 a N.*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//Protótipo de Função
int somaNumeroMultiplo(int);

int main(void){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	int num;
	
//Instruções
	//printf("");
	//scanf("%",&);
	
	do{
		printf("Digite um número positivo: ");
		scanf("%d",&num);	
	}while(num<0);
		
	printf("\nA soma dos Numeros Multiplos: %d",somaNumeroMultiplo(num));
	return 0;
}

int somaNumeroMultiplo(int n){
	int i, soma=0;
	
	for(i=1; i<n; i++){
		if(i % 3 == 0){
			printf("\nNumeros Multiplos: %d",i);
			soma += i;
		}
	}
	return soma;
	//printf("\nA soma dos Numeros Multiplos: %d",soma);
}

