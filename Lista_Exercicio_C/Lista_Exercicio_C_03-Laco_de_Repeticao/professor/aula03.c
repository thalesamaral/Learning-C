// Sintese
//   objetivo "Caixa de supermercado"
//   entrada "qtd e preco dos produtos. Valor pago"
//   saida "valor compra e troco do cliente. Final dia: faturamento, qtd clientes e media compras"
#include <stdio.h>
#include <locale.h>

int main(void) {
	char resp;
	int qtdProdutos, i, qtdProduto, clientes=0;
	float valor, compra, pago, faturamento=0;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Chegou cliente (s/n): ");
	scanf("%c", &resp);
	while (resp == 's') {
		
		
		printf("Quantos tipos de produtos? ");
		scanf("%d", &qtdProdutos);
		compra = 0;
		for (i=1; i<=qtdProdutos; i++) {
			printf("Quantos do %dº produto? ", i);
			scanf("%d", &qtdProduto);
			printf("Valor do %dº produto?   ", i);
			scanf("%f", &valor);
			compra += qtdProduto * valor;
		}
		printf("\n\nTotal compra.......: R$ %.2f", compra);
		printf("\nDigite o valor pago: ");
		scanf("%f", &pago);
		printf("Troco..............: R$ %.2f", pago - compra);
		faturamento += compra;
		clientes++;
		printf("\n\nNovo cliente (s/n): ");
		fflush(stdin);
		scanf("%c", &resp);
	}
	printf("\n\nFaturamento..: R$ %.2f", faturamento);
	printf("\nClientes.....: %d", clientes);
	printf("\nMédia compras: R$ %.2f", faturamento/clientes);
	return 0;
}
