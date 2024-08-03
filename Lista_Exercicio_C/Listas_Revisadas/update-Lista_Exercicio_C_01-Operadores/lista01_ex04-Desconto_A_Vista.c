//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "05/08/2022"
/*	Objetivo: leia o valor de uma determinada mercadoria de uma loja.
Sabendo que o desconto para pagamento � vista � de 10% sobre o valor total, calcule o valor a ser pago � vista.
Escreva o valor total, o valor do desconto e o valor a ser pago � vista.
*/
#include<stdio.h>
#include<stdlib.h>

int main(void){
//Variaveis
	float valorTotal;
	char respostaAVista;
	
//Instru��es
	printf("Informe o valor da mercadoria: ");
	scanf("%f", &valorTotal);
	
	do{
		printf("\nO desconto para pagamento a vista eh de 10%%!\n");
		printf("Vai pagar a vista? [S] ou [N]: ");
			respostaAVista = getche();
			respostaAVista = toupper(respostaAVista);
	//Condi��es
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

