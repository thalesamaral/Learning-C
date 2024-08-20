//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "19/08/2024"
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
int quantidade_divisor(int);
int valida_numero(void);
void mensagem_inicial(void);

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	int numero, qtd;
	
//Instruções
	mensagem_inicial();

	numero = valida_numero();
	
	qtd = quantidade_divisor(numero);

	if(qtd == numero)
		printf("\nNumero Perfeito!\n");
	else if(qtd > numero)
		printf("\nNumero Abundante!\n");
	else if(qtd < numero)
		printf("\nNumero Deficiente!\n");
	
	return 0;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************

int valida_numero(){
	int num;
	
	do{
		printf("Digite um numero: ");
		scanf("%d",&num);
		if(num <= 0){
			system("cls");
			printf("Numero invalido, apenas numeros positivos\n\n");
			mensagem_inicial();
		}
	}while(num <= 0);
	
	return num;
}

int quantidade_divisor(int num){
	int i, qtdDivisor;
	
	if(num == 1){
		return 0;
	}
	printf("\nDivisores: ");
	for(i=1; i<num; i++){
		if(num % i == 0){
			qtdDivisor += i;
			printf("%d; ",i);
		}
	}		
	printf("\nSoma dos divisores: %d\n",qtdDivisor);
	return qtdDivisor;
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
