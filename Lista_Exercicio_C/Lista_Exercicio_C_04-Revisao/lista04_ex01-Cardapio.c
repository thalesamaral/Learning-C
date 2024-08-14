// Síntese
// Autor: Thales Amaral Lima
// Data: 13/08/2024
/* Objetivo: 
Escrever um programa em C que leia o código do item pedido, a quantidade e calcule o valor 
a ser pago por aquele lanche. Considere que a cada execução somente será calculado um 
item.
*/
#include <stdio.h>

int main(void){
//Declarações
	int cod, quant;
	float conta;

//Instruções
	printf("Especificacao  |Codigo|Preco\n");
	printf("----------------------------\n");
	printf("Cachorro quente|0     |1,20\n");
	printf("Bauru simples  |1     |1,30\n");
	printf("Bauru com ovo  |2     |1,50\n");
	printf("Hamburguer     |3     |1,20\n");
	printf("X Burguer      |4     |1,30\n");
	printf("Refrigerante   |5     |1,00\n");
	printf("----------------------------\n");
	
	printf("\nDigite o codigo para o pedido: ");
	do{
		scanf("%d",&cod);
		if(cod < 0 || cod > 5)
			printf("Codigo invalido\n");
	}while(cod < 0 || cod > 5);
	
	printf("Quantas unidades: ");
	scanf("%d",&quant);
	printf("\n");
		
	switch(cod){
		case 0:
			conta = quant * 1.20;
			printf("Cachorro quente: %.2f\n",conta);
		break;
		case 1:
			conta = quant * 1.30;
			printf("Bauru simples: %.2f\n",conta);
		break;
		case 2:
			conta = quant * 1.50;
			printf("Bauru com ovo: %.2f\n",conta);
		break;
		case 3:
			conta = quant * 1.20;
			printf("Hamburguer: %.2f\n",conta);
		break;
		case 4:
			conta = quant * 1.30;
			printf("X Burguer: %.2f\n",conta);
		break;
		case 5:
			conta = quant * 1.00;
			printf("Refrigerante: %.2f\n",conta);
		break;
		default:
			printf("Opcao invalida!\n");
		break;
	}
}

