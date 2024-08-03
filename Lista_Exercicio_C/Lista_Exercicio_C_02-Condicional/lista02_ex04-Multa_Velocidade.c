//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "01/12/2021"
/*	Objetivo: */
//  Entrada.: Velocidade do motorista km/h.
//  Saída...: Informação sobre o limite da velocidade.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(void){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	int speed;
	
//Instruções
	//printf("");
	//scanf("%",&);
	
	printf("Informe a velocidade do motorista em Km/h: ");
	scanf("%d",&speed);
	printf("\n%d Km/h\n",speed);
	
	if(speed > 80)
		printf("O USUÁRIO ULTRAPASSOU A VELOCIDADE MÁXIMA E SERÁ MULTADO");
	else
		printf("O USUÁRIO ESTÁ DENTRO DO LIMITE MÁXIMO DE VELOCIDADE.");
	
	return 0;
}

