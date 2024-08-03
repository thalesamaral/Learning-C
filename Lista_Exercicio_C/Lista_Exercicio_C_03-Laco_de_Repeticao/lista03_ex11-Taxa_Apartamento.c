//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "08/12/2021"
/*	Objetivo: deve receber o número do apartamento e apresentar o valor da taxa de condomínio.
Seguindo algumas regras de taxa sobre número do andar e apartamento.*/
//  Entrada : Nº apartamento.
//  Saída   : valor da taxa de condomínio.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAM

int main(void){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	int num, i;
	float taxa, andar, apart;
	
//Instruções
	//printf("");
	//scanf("%",&);
	
	printf("=============================================\n");
	printf("    Digite o número do seu apartamento\n");
	printf("Exemplo -> 0101: apartamento 01 do 01 andar.\n");
	printf("Cada andar tem 4 apartamentos Ex: 0101 - 0104\n");
	printf("=============================================\n");
	
	do{
		printf("Digite o número do seu apartamento: ");
		scanf("%d",&num);
	}while((num <= 100) || (num % 100 > 4)); //ENQUANTO: num menor que 100 OU resto for maior que 4
	
	if((num % 2) != 0)
		taxa = 200;
	else if((num % 2) == 0)
		taxa = 250;
	
	apart = (num % 100);
	
	printf("=============================================\n");
	printf("Apartamentos pares com 4 quartos R$250,00\n");
	printf("Apartamentos ímpares com 3 quartos R$200,00\n");
	printf("=============================================\n");
	printf("------------- APARTAMENTO: %.0f ----------------\n",apart);
	printf("------------- TAXA ATUAL R$%.1f ------------\n",taxa);
	
	andar = (num/100) - (num%100)/10; //Exemplo num{803}: (num/100){8,03} - {0,3}(10/ {3}(num%100))
		
	for(i=1; i<=andar; i=i+3){
		taxa += 10;
		//printf("Taxa: %.1f\n",taxa);
	}
	
	printf("=============================================\n");
	printf("Será adicionado R$10,00 a cada 3 andares \n");
	printf("Exemplo: andares 1, 2, 3 recebem R$10,00 \n");
	printf("Assim em diante: 4, 5, 6 recebem R$20,00... \n");
	printf("=============================================\n");
	printf("------------- ANDAR: %.0f ----------------------\n",andar);
	printf("------------- TAXA ATUAL R$%.1f ------------\n",taxa);
	
	return 0;
}

