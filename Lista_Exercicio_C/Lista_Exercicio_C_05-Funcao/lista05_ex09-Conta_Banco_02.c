//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "12/12/2021"
/*	Objetivo: verificar se o debito � poss�vel considerando o saldo e o valor do limite especial*/
//  Entrada.: conta especial que possui saldo e limite especial.
//  Sa�da...:
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//Prot�tipo de Fun��o
calcularSaldo(float, char, float, float);

int main(void){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	float saldo, valorOp, credEspecial;
	char operacao;
	
//Instru��es
	//printf("");
	//scanf("%",&);
	
	do{
		printf("Saldo da conta banc�ria: ");
		scanf("%f",&saldo);
	}while(saldo<0);
	
	do{
		printf("Informe o Limite especial: ");
		scanf("%f",&credEspecial);
	}while(credEspecial<0);
	
	do{
		printf("\nOpera��o banc�ria [C]cr�dito ou [D]d�bito: ");
		operacao = getche();
		operacao = toupper(operacao);
	}while((operacao != 'C') && (operacao != 'D'));
	
	do{
		printf("\nValor da opera��o: ");
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


