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
#define BARRA_DUPLA printf("\n============================================================\n");

//Protótipo de Função
int valor_ou_fim(int*);
float loop_valor_positivo();
void preco_20_porcento(float*);
void mensagem_inicial();

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	int codigo, qtd=0;
	float preco, precoInicial=0, preco20=0;
	
//Instruções
	
	mensagem_inicial();

	while(valor_ou_fim(&codigo)){
		printf("\nPreco do produto\n");
		preco = loop_valor_positivo();
		
		qtd++;
		precoInicial += preco;
		
		BARRA_DUPLA
		printf("Codigo: %d, Preco antigo: %.2f\n",codigo, preco);
		preco_20_porcento(&preco);
		preco20 += preco;
		printf("Codigo: %d, Preco novo..: %.2f",codigo, preco);
		
		BARRA_DUPLA
		printf("Media do preco inicial.: %.2f\n",precoInicial/qtd);
		printf("Media do preco com 20%%.: %.2f",preco20/qtd);
		BARRA_DUPLA

		mensagem_inicial();
	}

	return 0;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************

int valor_ou_fim(int *valorRef){
	int valor;
	
	printf("Insira o valor: ");
	scanf("%d",&valor);

	if(valor < 0){
		printf("\nNumero negativo. Programa finalizado!\n\n");
		return 0;
	}else{
		*valorRef = valor;
		return 1;
	}
}

float loop_valor_positivo(){
	float valor;
	
	do{
		printf("Insira o valor: ");
		scanf("%f",&valor);
		if(valor <= 0){
			//system("cls");
			printf("Valor invalido, apenas numeros positivos\n\n");
		}
	}while(valor <= 0);
	
	return valor;
}

void preco_20_porcento(float *preco){
	
	*preco = *preco * 1.20;
	
}

void mensagem_inicial(){
	printf("\nDigite o numero do codigo\n");
	printf("Ou, digite -1 para finalizar!\n\n");
}