//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "01/12/2021"
/*	Objetivo: */
//  Entrada.: Sal�rio bruto
//  Sa�da...: S�lario liquido
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	float salBruto;
	float salLiquido;
	float valorExcedente;
	
//Instru��es
	//printf("");
	//scanf("%",&);
	
	printf("Informe o Sal�rio: ");
	scanf("%f",&salBruto);
	salLiquido = salBruto;
	
	if(salBruto<=1200)
		salLiquido -= (salBruto*11)/100;
	else{
		salLiquido -= (salBruto*11)/100;
		valorExcedente = salBruto - 1200;
		salLiquido -= (valorExcedente*20)/100;
	}
	
	printf("\nSal�rio Bruto: %.2f\n",salBruto);
	printf("Sal�rio Liquido: %.2f\n",salLiquido);
	
	return 0;
}

