//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "24/08/2024"
/*	Objetivo:
c) Altere o programa anterior: Agora seu subprograma não deve apenas calcular o valor do 
saldo final, mas alterar o valor do saldo e do limite especial, quando for o caso;
*/
// Entrada..: valor do saldo; operação (débito ou crédito); valor desta operação; limite especial
// Saída....: calcular e imprimir o valor do saldo após a operação
#include<stdio.h>
#include<ctype.h>

//Protótipo de Função
float loop_valor_positivo();
void valida_resposta(char*);
float calcula_saldo_final(float, char, float, float);

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	float saldo, valorOperacao, limiteEspecial;
	char operacao;
	
//Instruções
	printf("Saldo da conta bancaria\n");
	saldo = loop_valor_positivo();

	printf("\nInforme o Limite especial\n");
	limiteEspecial = loop_valor_positivo();
	
	printf("\nOperacao bancaria [C]Credito ou [D]Debito\n");
	valida_resposta(&operacao);

	printf("\nValor da operacao\n");
	valorOperacao = loop_valor_positivo();

	while(saldo + limiteEspecial < valorOperacao){
		printf("\nSaldo e limite insuficiente!\n");
		
		printf("\nInforme o novo Saldo\n");
		saldo = loop_valor_positivo();

		printf("\nInforme o novo Limite especial\n");
		limiteEspecial = loop_valor_positivo();
	}
	
	printf("\nSaldo final: %.2f\n\n",calcula_saldo_final(saldo, operacao, valorOperacao, limiteEspecial));
	
	return 0;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************

float loop_valor_positivo(){
	float valor;
	
	do{
		printf("Insira o valor: ");
		scanf("%f",&valor);
		if(valor <= 0){
			printf("\nValor invalido, apenas numeros positivos\n\n");
		}
	}while(valor <= 0);
	
	return valor;
}

void valida_resposta(char *resposta){
	
	do{
		fflush(stdin);
		printf("Resposta: ");
		*resposta = getchar();
		while (getchar() != '\n');
		*resposta = toupper(*resposta);
		if((*resposta != 'C') && (*resposta != 'D')){
			printf("\nResposta invalida!\n\n");
		}
	}while((*resposta != 'C') && (*resposta != 'D'));
}

float calcula_saldo_final(float saldo, char op, float valor, float limite){
	
	if(op == 'C'){
		saldo += valor;
	}else if(op == 'D'){
		if(saldo + limite >= valor){
			saldo -= valor;
		}
	}

	return saldo;
}
