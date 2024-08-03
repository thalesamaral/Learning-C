//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "10/12/2021"
/*	Objetivo: leia um número inteiro n, verifica e imprime se este é perfeito,
se é abundante e se é deficiente.*/
//  Entrada.:
//  Saída...:
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//Protótipo de Função
int verificarNumero(int);

int main(void){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	int numero, ref;
	
//Instruções
	printf("Digite um número: \n");
	scanf("%d",&numero);
	
	ref = verificarNumero(numero);
	if(ref == numero)
		printf("\nNúmero Perfeito: %d\n",ref);
	else if(ref > numero)
		printf("\nNúmero Abundante: %d\n",ref);
	else if(ref < numero)
		printf("\nNúmero Deficiente: %d\n",ref);
	
	return 0;
}

int verificarNumero(int num){
	int i, somaDivisor;
	
	printf("Divisores: ");
	for(i=1; i<num; i++){
		if(num % i == 0){
			somaDivisor += i;
			printf("%d ",i);
		}
	}		
	
	return somaDivisor;
	
}

