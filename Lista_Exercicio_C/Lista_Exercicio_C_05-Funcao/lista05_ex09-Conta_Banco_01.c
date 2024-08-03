//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "12/12/2021"
/*	Objetivo: utilize um subprograma para calcular e imprimir (subprograma) o valor do saldo
após a operação*/
//  Entrada.: saldo conta bancária, operação bancária (débito ou crédito) e o valor desta operação.
//  Saída...:
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//Protótipo de Função
calcularSaldo(float, char, float);

int main(void){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	float saldo, valorOp;
	char operacao;
	
//Instruções
	//printf("");
	//scanf("%",&);
	
	do{
		printf("Saldo da conta bancária: ");
		scanf("%f",&saldo);
	}while(saldo<0);
	
	do{
		printf("\nOperação bancária [C]crédito ou [D]débito: ");
		operacao = getche();
		operacao = toupper(operacao);
	}while((operacao != 'C') && (operacao != 'D'));
	
	do{
		printf("-1 para finalizar!\n");
		printf("\nValor da operação: ");
		scanf("%f",&valorOp);
	}while(valorOp<0);
	
	calcularSaldo(saldo, operacao, valorOp);
	
	return 0;
}

calcularSaldo(float saldo, char op, float valor){
	
	if(op == 'C')
		saldo += valor;
	else
		saldo -= valor;

	printf("\nSaldo atual: %.2f",saldo);
}


