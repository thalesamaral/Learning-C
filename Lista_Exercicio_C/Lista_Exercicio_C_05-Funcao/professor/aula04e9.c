// Sintese
//   objetivo "Calcula saldo de conta banc�ria"
//   entrada "Saldo; opera��o (d�bito ou cr�dito); valor da opera��o"
//   saida "Saldo"
#include <stdio.h>

// Prot�tipo de fun��o
void calcularSaldo(float, char, float);

// Funcao main 
int main(void) {
	float saldo, valorOp;
	char operacao;
	
	printf("Digite o valor do saldo atual: R$ ");
	scanf("%f", &saldo);
	printf("Digite a operacao (d/c)......: ");
	fflush(stdin);
	scanf("%c", &operacao);
	printf("Digite o valor da operacao...: R$ ");
	scanf("%f", &valorOp);
	
	calcularSaldo(saldo, operacao, valorOp);

	return 0;
}

// Calcular saldo *************************************************************
void calcularSaldo(float saldo, char op, float valor) {
	if (op == 'c')
		saldo += valor;
	else
		saldo -= valor;
	printf("Novo saldo (apos a operacao).: R$ %.2f", saldo);
}












// FIM ************************************************************************
