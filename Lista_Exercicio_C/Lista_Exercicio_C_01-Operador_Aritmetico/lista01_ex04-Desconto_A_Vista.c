//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "05/08/2022"
/*	Objetivo:
Faça um programa em C que leia o valor de uma determinada mercadoria de uma loja.
Sabendo que o desconto para pagamento à vista é de 10% sobre o valor total, calcule o valor a ser pago à vista.
Escreva o valor total, o valor do desconto e o valor a ser pago à vista.
*/
#include<stdio.h>
#include<stdlib.h>

int main(void){
//Declarações
	float valorTotal;
	char respostaAVista;
	
//Instruções
	printf("Informe o valor da mercadoria: ");
	scanf("%f", &valorTotal);
	
	do{
		printf("\nO desconto para pagamento a vista eh de 10%%!\n");
		printf("Vai pagar a vista? [S] ou [N]: ");
			respostaAVista = getche();
			respostaAVista = toupper(respostaAVista);
		if(respostaAVista != 'S' && respostaAVista != 'N'){
			system("cls");
			printf("Valor da mercadoria: %.2f\n", valorTotal);
		}else if(respostaAVista == 'S'){
			valorTotal -= valorTotal * 0.1;
			printf("\n\nPagamento a vista com desconto: %.2f", valorTotal);
		}else{
			printf("\n\nPagamento total: %.2f",valorTotal);
		}
	}while(respostaAVista != 'S' && respostaAVista != 'N');
	
	return 0;
}

