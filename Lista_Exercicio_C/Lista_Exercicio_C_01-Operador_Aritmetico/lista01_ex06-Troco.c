//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "30/11/2021"
/*	Objetivo:  receba o valor total de uma compra e o valor pago pelo cliente,
calcule e imprima o valor do troco.
*/
#include<stdio.h>
#include<stdlib.h>

int main(void){
//Variaveis
	float valorTotal, valorPago, troco;
	
//Instruções
	printf("Digite o valor da compra: ");
	scanf("%f",&valorTotal);
	
	printf("Digite o valor de pagamento: ");
	scanf("%f",&valorPago);
	troco = valorPago - valorTotal;
	
	if(troco < 0)
		printf("Valor insuficiente! Falta pagar %.2f reais", troco * -1);
	else if(troco == 0)
		printf("Pagamento total realizado!");
	else
		printf("Pagamento realizado! Troco de %.2f reais", troco);
	return 0;
}

