//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "07/12/2021"
/*	Objetivo:
Fazer um programa em C que simule o funcionamento de uma calculadora comum que 
permita acumular resultado, onde o usuário entra com operando, operador, operando, 
operador, etc. Os operadores válidos devem ser: +, -, *, /, S (sair), L (limpar o valor 
acumulado; iniciando com novo operador). Exemplo do funcionamento desejado:
Digite um operando: 10
Digite um operador: +
Digite um operando: 5
O resultado é 15
Digite um operador: *
Digite um operando: 2 O resultado é 30
Digite um operador: L
Digite um operando: 2
Digite um operador: +
Digite um operando: 3 O resultado é 5
Digite um operador: S
*/
#include<stdio.h>
#include<stdlib.h> //system("cls");
#define TAM

int main(void){
//Declarações
	int op1, op2, flag;
	float resultado=0;
	char operador;
	
//Instruções
	printf("================================\n");
	printf("          CALCULADORA\n");
	printf("================================\n");
	printf("Operadores Validos:\n");
	printf("[+][-][*][/][S]sair[L]limpar\n");
	printf("--------------------------------\n");
	flag = 1;

	do{
		if(flag){
			printf("Numero...: ");
			scanf("%d",&op1);
		}

		do{
			printf("Operador.: ");
			fflush(stdin);
			scanf("%c",&operador);
		}while((operador!='+')&&(operador!='-')&&(operador!='*')&&(operador!='/')&&(operador!='S')&&(operador!='L'));
		
		if(operador != 'S'){
			if(operador != 'L'){
				printf("Numero...: ");
				scanf("%d",&op2);
				
				switch(operador){
					case '+':
						resultado = op1+op2;
					break;
					case '-':
						resultado = op1-op2;
					break;
					case '*':
						resultado = op1*op2;
					break;
					case '/':
						resultado = op1/op2;
					break;
				}
				printf("-----------------\n");
				printf("Resultado: %.2f\n",resultado);
				printf("-----------------\n");
				
				flag=0;
				op1=resultado;
					
			}else if(operador == 'L'){
				resultado=0;
				op1=0;
				flag=1;
				system("cls");
				printf("-----Limpar------\n\n\n");
				printf("================================\n");
				printf("          CALCULADORA\n");
				printf("================================\n");
				printf("Operadores Validos:\n");
				printf("[+][-][*][/][S]sair[L]limpar\n");
				printf("--------------------------------\n");
			}
		}
	}while(operador!='S');

	printf("-----Sair--------\n");

	return 0;
}

