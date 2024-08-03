// Sintese
//   objetivo "Calcula saldo de conta bancária"
//   entrada "Saldo; operação (débito ou crédito); valor da operação"
//   saida "Saldo"
#include <stdio.h>

// Protótipo de função
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
