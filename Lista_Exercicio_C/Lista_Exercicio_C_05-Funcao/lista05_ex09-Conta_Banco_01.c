//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "24/08/2024"
/*	Objetivo:
a) Receba do usuário o valor do saldo de uma conta bancária,
uma operação bancária (débito ou crédito) e o valor desta operação,
e utilize um subprograma para calcular e imprimir o valor do saldo após a operação;
*/
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
		printf("Saldo da conta bancaria: ");
		scanf("%f",&saldo);
	}while(saldo<0);
	
	do{
		printf("\nOperacao bancaria [C]Credito ou [D]Debito: ");
		operacao = getche();
		operacao = toupper(operacao);
	}while((operacao != 'C') && (operacao != 'D'));
	
	do{
		printf("-1 para finalizar!\n");
		printf("\nValor da operacao: ");
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


