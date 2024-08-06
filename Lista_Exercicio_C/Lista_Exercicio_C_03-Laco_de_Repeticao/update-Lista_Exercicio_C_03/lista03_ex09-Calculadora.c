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
#include<stdlib.h>
#define TAM

int main(void){
//Declarações
	int op1, op2, flag = 0;
	float valor=0;
	char opera;
	
//Instruções
	printf("================================\n");
	printf("          CALCULADORA\n");
	printf("================================\n");
	printf("[+][-][*][/][S](sair)[L](limpar)\n");
	printf("--------------------------------\n");
	
	do{
		if(flag == 0){
			printf("N�mero...: ");
			scanf("%d",&op1);
		}
		do{
			printf("Operador.: ");
			fflush(stdin);
			scanf("%c",&opera);
		}while((opera!='+')&&(opera!='-')&&(opera!='*')&&(opera!='/')&&(opera!='S')&&(opera!='L'));
		
		if(opera != 'S'){
			if(opera != 'L'){
				printf("N�mero...: ");
				scanf("%d",&op2);
				
				switch(opera){
					case '+':
						valor = op1+op2;
					break;
					case '-':
						valor = op1-op2;
					break;
					case '*':
						valor = op1*op2;
					break;
					case '/':
						valor = op1/op2;
					break;
				}
				printf("-----------------\n");
				printf("Resultado: %.2f\n",valor);
				
				flag=1;
				op1=valor;
					
			}else if(opera=='L'){
				valor=0;
				flag=0;
				op1=0;
				printf("-----Limpar------\n");
			}
		}
	}while(opera!='S');
	printf("-----Sair-------\n");
	return 0;
}

