//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "01/12/2021"
/*	Objetivo: receba o preço do litro da gasolina e o valor que o motorista deseja abastecer, 
calcule e imprima a quantidade de litros correspondente a este valor.
*/
#include<stdio.h>
#include<stdlib.h>

int main(void){
//Variaveis
	float precoLgasolina;
	float pagamento;
	
//Instruções
	//printf("");
	//scanf("%",&);
	
	printf("Preco do litro da gasolina: ");
	scanf("%f",&precoLgasolina);
	
	printf("Quantos reais deseja pagar: ");
	scanf("%f",&pagamento);
	
	printf("Voce recebera %.4f Litros",pagamento/precoLgasolina);
	
	return 0;
}

