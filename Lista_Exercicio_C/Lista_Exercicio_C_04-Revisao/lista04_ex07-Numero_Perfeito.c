// Síntese
// Autor: Thales Amaral Lima
// Data: 0/0/2024
/* Objetivo: */
#include <stdio.h>

int main(void){
//Declarações
	int num,c,soma=0;
	
//Instruções
    
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

