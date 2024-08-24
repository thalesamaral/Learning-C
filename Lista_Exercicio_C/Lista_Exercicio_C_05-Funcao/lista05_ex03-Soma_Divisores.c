//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "24/08/2024"
/*	Objetivo:
3. Considerando que: 
	• Um número é perfeito se a soma de todos os seus divisores, exceto ele mesmo, é 
igual ao próprio número. Por exemplo, o número 6 é perfeito porque 1 + 2 + 3 = 6;
	• Um número é abundante se a soma de todos os seus divisores, exceto ele mesmo, é 
maior do que o próprio número. Por exemplo, o número 12 é abundante porque 1 + 2 
+ 3 + 4 + 6 = 16;
	• Um número é deficiente se a soma de todos os seus divisores, exceto ele mesmo, é 
menor do que o próprio número. Por exemplo, o número 10 é deficiente porque 1 + 2 
+ 5 = 8.
Faça um programa em C que contenha subprograma. É necessário que seu 
programa como um todo leia um número inteiro n, verifica e imprime se este é perfeito, 
se é abundante e se é deficiente.
*/
#include<stdio.h>
#include<stdlib.h>
#define BARRA_DUPLA printf("============================================================\n");
#define BARRA_SIMPLES printf("------------------------------------------------------------\n");

//Protótipo de Função
int soma_divisores_antes_de_n(int);
int loop_int_positivo();
void mensagem_inicial();

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	int numero, somaDivisores;
	
//Instruções
	mensagem_inicial();

	printf("\nEscolha um numero inteiro e positivo\n");
	numero = loop_int_positivo();
	
	somaDivisores = soma_divisores_antes_de_n(numero);

	printf("\nSoma dos divisores: %d\n",somaDivisores);

	if(somaDivisores == numero)
		printf("\nNumero Perfeito!\n");
	else if(somaDivisores > numero)
		printf("\nNumero Abundante!\n");
	else if(somaDivisores < numero)
		printf("\nNumero Deficiente!\n");
	
	return 0;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************

int loop_int_positivo(){
	int valor;
	
	do{
		printf("Insira o valor: ");
		scanf("%d",&valor);
		if(valor <= 0){
			system("cls");
			printf("Valor invalido, apenas numeros positivos\n\n");
			mensagem_inicial();
		}
	}while(valor <= 0);
	
	return valor;
}

int soma_divisores_antes_de_n(int num){
	int i, soma;
	
	if(num == 1){
		return 0;
	}

	printf("\nDivisores: ");
	for(i=1; i<num; i++){
		if(num % i == 0){
			soma += i;
			printf("%d; ",i);
		}
	}

	return soma;
}

void mensagem_inicial(){
	BARRA_DUPLA
	printf(" Numero Perfeito: se N for igual a soma de\n");
	printf(" seus divisores positivos diferentes de N\n");
	BARRA_SIMPLES
	printf(" Numero Abundante: se N for maior que a soma de\n");
	printf(" seus divisores positivos diferentes de N\n");
	BARRA_SIMPLES
	printf(" Numero Deficiente: se N for menor que a soma de\n");
	printf(" seus divisores positivos diferentes de N\n");
	BARRA_DUPLA
}
