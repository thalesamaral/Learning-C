// Síntese
// Autor: Thales Amaral Lima
// Data: 18/08/2024
/* Objetivo:
Faça um programa em C que leia um número n e mostre na tela os n primeiros números 
primos (um número primo tem apenas 2 divisores: 1 e ele mesmo! O número 1 não é 
primo!!!).
*/
#include<stdio.h>
#include<stdlib.h> //system();

int main(void){
//Declarações
	int num, contPrimos, i, j;
	//c2,c1,aux=0;

//Instruções
	
	do{
		printf("Digite um numero: ");
		scanf("%d",&num);
		if(num<0){
			system("cls");
			printf("Numero invalido\n");
		}
	}while(num<0);
	
	for(i=1; i<=num; i++){
		printf("i %d\n",i);
		for(j=1; j<=i; j++){
			printf("j %d\n",j);
			if(i%j == 0){
				contPrimos++;
				printf("cont %d\n",contPrimos);
			}
		}
		if(contPrimos == 2){
			printf("\nii %d\n",i);
		}
		contPrimos=0;
	}
	
	/*
	for(c1=0; c1<=num; c1++){
		c1++;
		for(c2=num; c2>=0; c2--){
			c2--;
			if(c2%c1 == 0){
				if(c1 != aux){
					printf("%d\n",c1);
					aux = c1;
				}
			}
		}
	}
	*/
	
}

