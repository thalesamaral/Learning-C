//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "03/08/2024"
/*  Objetivo:
Faça um programa em C que receba o valor total de uma compra e o valor pago pelo cliente, calcule e imprima o valor do troco.
*/
#include<stdio.h>
#include<stdlib.h>

int main(void){
//Declarações
    float valorCompra, valorPago, troco;
    
//Instruções
    printf("Digite o valor da compra: ");
    scanf("%f",&valorCompra);
    
    printf("Digite o valor de pagamento: ");
    scanf("%f",&valorPago);

    troco = valorPago - valorCompra;
    printf("\nTroco de %.2f reais", troco);

    return 0;
}
