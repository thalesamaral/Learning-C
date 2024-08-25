//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "24/08/2024"
/*	Objetivo:
b) Altere o programa anterior: Agora temos uma conta especial que possui saldo e limite 
especial, um valor de crédito pré-aprovado que somado ao saldo da conta. Agora, deve-se 
verificar se o débito é possível considerando o saldo e o valor do limite especial;
*/
// Entrada..: valor do saldo; operação (débito ou crédito); valor desta operação
// Saída....: calcular e imprimir o valor do saldo após a operação
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

//Protótipo de Função
float loop_valor_positivo();
void valida_resposta(char*);
float calcula_saldo_final(float, char, float, float);

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	float saldo, valorOperacao, credEspecial;
	char operacao;
	
//Instruções
	printf("Saldo da conta bancaria\n");
	saldo = loop_valor_positivo();

	printf("\nInforme o Limite especial\n");
	credEspecial = loop_valor_positivo();
	
	printf("\nOperacao bancaria [C]Credito ou [D]Debito\n");
	valida_resposta(&operacao);

	printf("\nValor da operacao\n");
	valorOperacao = loop_valor_positivo();
	
	if(saldo + credEspecial >= valorOperacao){
		printf("\nSaldo final: %.2f\n\n",calcula_saldo_final(saldo, operacao, valorOperacao, credEspecial));
	}else{
		printf("\nSaldo insuficiente!\n\n");
	}
	
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

float calcula_saldo_final(float saldo, char op, float valor, float cred){
	
	if(op == 'C'){
		saldo += valor;
	}else if(op == 'D'){
		if(saldo + cred >= valor){
			saldo -= valor;
		}
	}

	return saldo;
}


