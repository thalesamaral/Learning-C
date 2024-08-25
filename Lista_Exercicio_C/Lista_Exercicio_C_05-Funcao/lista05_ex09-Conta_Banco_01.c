//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "24/08/2024"
/*	Objetivo:
a) Receba do usuário o valor do saldo de uma conta bancária,
uma operação bancária (débito ou crédito) e o valor desta operação,
e utilize um subprograma para calcular e imprimir o valor do saldo após a operação;
*/
// Entrada..: valor do saldo; operação (débito ou crédito); valor desta operação
// Saída....: calcular e imprimir o valor do saldo após a operação
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

//Protótipo de Função
float loop_valor_positivo();
void valida_resposta(char*);

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	float saldo, valorOperacao;
	char operacao;
	
//Instruções
	
	printf("Saldo da conta bancaria\n");
	saldo = loop_valor_positivo();
	
	printf("\nOperacao bancaria [C]Credito ou [D]Debito\n");
	valida_resposta(&operacao);

	printf("\nValor da operacao\n");
	valorOperacao = loop_valor_positivo();
	
	//calcularSaldo(saldo, operacao, valorOp);
	if(operacao == 'C'){
		saldo += valorOperacao;
	}else if(operacao == 'D'){
		saldo -= valorOperacao;
	}

	printf("\nSaldo final: %.2f",saldo);
	
	return 0;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************

float loop_valor_positivo(){
	float valor;
	
	do{
		printf("Insira o valor: ");
		scanf("%f",&valor);
		if(valor <= 0){
			printf("\nValor invalido, apenas numeros positivos\n\n");
		}
	}while(valor <= 0);
	
	return valor;
}

void valida_resposta(char *resposta){
	
	do{
		fflush(stdin);
		printf("Resposta: ");
		*resposta = getchar();
		while (getchar() != '\n');
		*resposta = toupper(*resposta);
		if((*resposta != 'C') && (*resposta != 'D')){
			printf("\nResposta invalida!\n\n");
		}
	}while((*resposta != 'C') && (*resposta != 'D'));
}

/*
calcularSaldo(float saldo, char op, float valor){
	
	if(op == 'C'){
		saldo += valor;
	}else if(op == 'C'){
		saldo -= valor;
	}

	printf("\nSaldo atual: %.2f",saldo);
}
*/
