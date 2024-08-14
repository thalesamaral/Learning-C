//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "03/08/2024"
/*	Objetivo:
Faça um programa em C para obter o peso de uma pessoa e informar ao usuário o valor do seu IMC (Índice de Massa Corporal).
Sabe-se que IMC é dado pela divisão do peso pela altura ao quadrado.
*/
#include<stdio.h>

int main(void){
//Declarações
	float peso;
	float altura, centimetros;
	float imc;
	
//Instruções
	printf("Informe o seu peso em Kg: ");
	scanf("%f", &peso);
	printf("\nInforme sua altura em centimetros: ");
	scanf("%f", &centimetros);
	altura = centimetros/100;
	
	imc = (peso / (altura*altura));
	printf("\n***************************\n");
	printf("     Seu IMC: %.1f", imc);
	printf("\n***************************\n\n");
	
	printf("****** Tabela do IMC *****************************\n");
	printf("*** Muito abaixo do peso: imc >= 16 && imc <= 16.9\n");
	printf("*** Abaixo do peso......: imc >= 17 && imc <= 18.4\n");
	printf("*** Peso normal.........: imc >= 18.5 && imc <= 24.9\n");
	printf("*** Acima do peso.......: imc >= 25 && imc <= 29.9\n");
	printf("*** Obesidade grau I....: imc >= 30 && imc <= 34.9\n");
	printf("*** Obesidade grau II...: imc >= 35 && imc <= 40\n");
	printf("*** Obesidade grau III..: imc > 40\n\n");
	
	return 0;
}

