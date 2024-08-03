//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "12/12/2021"
/*	Objetivo: Agora seu subprograma deve responder se a operação bancária foi ou não realizada.*/
//  Entrada.: saldo conta bancária, operação bancária (débito ou crédito) e o valor desta operação.
//  Saída...:
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//Protótipo de Função
int calcularSaldo(float, char, float, float);

int main(void){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	float saldo, valorOp, limiteEspecial;
	char operacao;
	
//Instruções
	//printf("");
	//scanf("%",&);
	
	do{
		printf("Saldo da conta bancária..: ");
		scanf("%f",&saldo);
	}while(saldo<0);
	
	do{
		printf("Informe o Limite especial: ");
		scanf("%f",&limiteEspecial);
	}while(limiteEspecial<0);
	
	do{
		printf("\n[C]crédito ou [D]débito..: ");
		operacao = getche();
		operacao = toupper(operacao);
	}while((operacao != 'C') && (operacao != 'D'));
	
	do{
		printf("\nValor da operação........: ");
		scanf("%f",&valorOp);
	}while(valorOp<0);
	
	if(!calcularSaldo(saldo, operacao, valorOp, limiteEspecial))
		printf("\nSaldo e limite insuficiente!");
		
	return 0;
}

int calcularSaldo(float saldo, char op, float valor, float limite){
	
	if(op == 'C')
		saldo += valor;
	else
		if(saldo + limite >= valor)
			saldo -= valor;
		else
			return 0;
		
	printf("\nSaldo atual: %.2f",saldo);
	return 1;
	
}


