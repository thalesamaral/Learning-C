// Síntese
// Autor: Thales Amaral Lima
// Data: 18/08/2024
/* Objetivo:
Faça um programa em C que leia um número n e mostre na tela os n primeiros números 
primos (um número primo tem apenas 2 divisores: 1 e ele mesmo! O número 1 não é 
primo!!!).
*/
#include<stdio.h>
#include<stdlib.h> //system();

int main(void){
//Declarações
	int num, qtdDivisores;

//Instruções
	
	do{
		printf("Identificar numeros primos\n");
		printf("Digite um numero: ");
		scanf("%d",&num);
		if(num<0){
			system("cls");
			printf("Numero invalido\n\n");
		}
	}while(num<0);
	
	for(int i=1; i<=num; i++){
		for(int j=1; j<=i; j++){
			if(i%j == 0){
				qtdDivisores++;
			}
		}
		if(qtdDivisores == 2){
			printf("Primo: %d\n",i);
		}
		qtdDivisores=0;
	}
}

