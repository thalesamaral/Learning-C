//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "07/12/2021"
/*	Objetivo: simule o funcionamento de uma calculadora comum que permita acumular
resultado, onde o usu�rio entra com operando, operador, operando, operador, etc. Os operadores v�lidos
devem ser: +, -, *, /, S (sair), L (limpar o valor acumulado; iniciando com novo operador). */
//  Entrada : N�mero, operador.
//  Sa�da   : Resultado da opera��o.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAM

int main(void){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	int op1, op2, flag = 0;
	float valor=0;
	char opera;
	
//Instru��es
	//printf("");
	//scanf("%",&);
	
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

