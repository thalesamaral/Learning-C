// Sintese
// Objetivo:
// Autor: Thales Amaral Lima
// Data: 29/02/2020
#include <stdio.h>
#include <conio.h>
int main(void){
//Declara��es
	int num,c,soma=0;
//Instru��es
    
    do{
		printf("Digite um numero\n");
		scanf("%i",&num);
		if (num<1){
			system("cls");
			printf("Numero invalido, digite de 1 pra cima\n");
		}
	}while(num<1);
    
	for(c=1;c<num;c++)
    	if(num % c == 0)
        	soma = soma + c;
	if(soma == num)
		printf("Numero eh Perfeito");
	else
		printf("Numero eh Imperfeito");
}

