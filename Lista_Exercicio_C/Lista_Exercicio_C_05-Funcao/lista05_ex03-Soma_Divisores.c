//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "10/12/2021"
/*	Objetivo: leia um n�mero inteiro n, verifica e imprime se este � perfeito,
se � abundante e se � deficiente.*/
//  Entrada.:
//  Sa�da...:
#include<stdio.h>
#include<stdlib.h>

//Protótipo de Função
int verificarNumero(int);

int main(void){
//Declarações
	int numero, ref;
	
//Instruções
	printf("Digite um n�mero: \n");
	scanf("%d",&numero);
	
	ref = verificarNumero(numero);
	if(ref == numero)
		printf("\nN�mero Perfeito: %d\n",ref);
	else if(ref > numero)
		printf("\nN�mero Abundante: %d\n",ref);
	else if(ref < numero)
		printf("\nN�mero Deficiente: %d\n",ref);
	
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

