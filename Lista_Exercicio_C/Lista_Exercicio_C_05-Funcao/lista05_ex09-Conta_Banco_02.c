//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "12/12/2021"
/*	Objetivo: verificar se o debito é possível considerando o saldo e o valor do limite especial*/
//  Entrada.: conta especial que possui saldo e limite especial.
//  Saída...:
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//Protótipo de Função
calcularSaldo(float, char, float, float);

int main(void){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	float saldo, valorOp, credEspecial;
	char operacao;
	
//Instruções
	//printf("");
	//scanf("%",&);
	
	do{
		printf("Saldo da conta bancária: ");
		scanf("%f",&saldo);
	}while(saldo<0);
	
	do{
		printf("Informe o Limite especial: ");
		scanf("%f",&credEspecial);
	}while(credEspecial<0);
	
	do{
		printf("\nOperação bancária [C]crédito ou [D]débito: ");
		operacao = getche();
		operacao = toupper(operacao);
	}while((operacao != 'C') && (operacao != 'D'));
	
	do{
		printf("\nValor da operação: ");
		scanf("%f",&valorOp);
	}while(valorOp<0);
	
	calcularSaldo(saldo, operacao, valorOp, credEspecial);
	
	return 0;
}

calcularSaldo(float saldo, char op, float valor, float cred){
	
	if(op == 'C')
		saldo += valor;
	else
		if(saldo + cred >= valor)
			saldo -= valor;
		else
			printf("\nSaldo insuficiente!");

	printf("\nSaldo atual: %.2f",saldo);
}


