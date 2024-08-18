// Síntese
// Autor: Thales Amaral Lima
// Data: 17/08/2024
/* Objetivo:
Dado um número n inteiro e positivo, dizemos que n é perfeito se n for igual à soma de seus 
divisores positivos diferentes de n. Construa um programa em C que verifica se um dado 
número é perfeito. Ex: 6 é perfeito, pois 1+2+3 = 6.
*/
#include<stdio.h>
#include<stdlib.h>

int main(void){
//Declarações
	int i, num, soma=0;
	
//Instruções
    
    do{
		printf("---------------------------------------------\n");
		printf(" N eh perfeito se N for igual a soma de seus\n");
		printf(" divisores positivos diferentes de N\n");
		printf("---------------------------------------------\n");
		printf("Digite um numero: ");
		scanf("%d",&num);
		if(num < 2){
			system("cls");
			printf("Numero invalido, apenas acima de 1\n\n");
		}
	}while(num < 2);
    printf("\n");

	for(i=1; i<num; i++){
		if(num % i == 0){
			printf(" + %d",i);
			soma += i;
		}
	}

	printf(" = %d\n",soma);

	if(soma == num){
		printf("Numero Perfeito -> %d\n\n",num);
	}else{
		printf("Numero Imperfeito -> %d\n\n",num);
	}
}

