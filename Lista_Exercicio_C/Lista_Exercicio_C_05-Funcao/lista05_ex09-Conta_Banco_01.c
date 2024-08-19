//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "12/12/2021"
/*	Objetivo: utilize um subprograma para calcular e imprimir (subprograma) o valor do saldo
ap�s a opera��o*/
//  Entrada.: saldo conta banc�ria, opera��o banc�ria (d�bito ou cr�dito) e o valor desta opera��o.
//  Sa�da...:
#include<stdio.h>
#include<stdlib.h>

//Protótipo de Função
calcularSaldo(float, char, float);

int main(void){
//Declarações
	float saldo, valorOp;
	char operacao;
	
//Instruções
	
	do{
		printf("Saldo da conta banc�ria: ");
		scanf("%f",&saldo);
	}while(saldo<0);
	
	do{
		printf("\nOpera��o banc�ria [C]cr�dito ou [D]d�bito: ");
		operacao = getche();
		operacao = toupper(operacao);
	}while((operacao != 'C') && (operacao != 'D'));
	
	do{
		printf("-1 para finalizar!\n");
		printf("\nValor da opera��o: ");
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


