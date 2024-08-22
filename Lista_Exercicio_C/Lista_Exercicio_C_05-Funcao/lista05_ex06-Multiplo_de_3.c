//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "22/08/2024"
/*	Objetivo:
6. Faça um programa em C que contenha subprograma. É necessário que seu programa como 
um todo leia um número inteiro N e imprima a soma dos números múltiplos de 3 do intervalo 
de de 0 a N.
*/
#include<stdio.h>

//Protótipo de Função
int soma_numero_multiplo_de_3(int);

int main(void){
//Declarações
	int numero;
	
//Instruções
	
	printf("Digite um numero: ");
	scanf("%d",&numero);

	printf("\n\nA soma dos Numeros Multiplos: %d\n\n",soma_numero_multiplo_de_3(numero));
	return 0;
}

int soma_numero_multiplo_de_3(int num){
	int i, soma=0;
	
	printf("\nNo intervalo de 0 - %d\n",num);
	printf("Numeros Multiplos de 3: ");
	for(i=1; i<num; i++){
		if(i % 3 == 0){
			printf("%d; ",i);
			soma += i;
		}
	}
	return soma;
}

