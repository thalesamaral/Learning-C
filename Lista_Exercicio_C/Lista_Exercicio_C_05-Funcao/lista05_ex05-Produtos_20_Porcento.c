//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "22/08/2024"
/*	Objetivo:
5. Faça um programa em C que contenha subprograma. É necessário que seu programa como 
um todo trate uma empresa que deseja aumentar seus preços em 20%. Seu programa deve 
ler o código e o preço de custo de cada produto e calcular o novo preço. Calcule também, a 
média dos preços com e sem aumento. Mostre o código e o novo preço de cada produto e, 
no final, as médias. A entrada de dados deve terminar quando for lido um código de produto 
negativo.
*/
#include<stdio.h>

//Protótipo de Função
void preco_20_porcento(float*);
int valida_numero();

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	int codigo, qtd=0;
	float preco, precoInicial=0, preco20=0;
	
//Instruções
	codigo = valida_numero();
	
	while(codigo >= 0){
		printf("Digite o preco: ");
		scanf("%f",&preco);
		
		qtd++;
		precoInicial += preco;
		
		printf("\nCodigo: %d, Preco antigo: %.2f",codigo, preco);
		preco_20_porcento(&preco);
		preco20 += preco;
		printf("\nCodigo: %d, Preco novo..: %.2f\n",codigo, preco);
		
		printf("\n==========================================\n");
		printf("Media do preco inicial.: %.2f",precoInicial/qtd);
		printf("\nMedia do preco com 20%%.: %.2f",preco20/qtd);
		printf("\n==========================================\n\n");
		
		codigo = valida_numero();
	}

	return 0;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************

void preco_20_porcento(float *preco){
	
	*preco = *preco * 1.20;
	
}

int valida_numero(){
	int num;
	
	do{
		printf("Digite o numero do codigo: ");
		scanf("%d",&num);
		if(num < 0){
			printf("\nNumero negativo. Programa finalizado!\n\n");
			return -1;
		}
	}while(num < 0);
	
	return num;
}