//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "01/12/2021"
/*	Objetivo: */
//  Entrada.: Velocidade do motorista km/h.
//  Sa�da...: Informa��o sobre o limite da velocidade.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(void){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	int speed;
	
//Instru��es
	//printf("");
	//scanf("%",&);
	
	printf("Informe a velocidade do motorista em Km/h: ");
	scanf("%d",&speed);
	printf("\n%d Km/h\n",speed);
	
	if(speed > 80)
		printf("O USU�RIO ULTRAPASSOU A VELOCIDADE M�XIMA E SER� MULTADO");
	else
		printf("O USU�RIO EST� DENTRO DO LIMITE M�XIMO DE VELOCIDADE.");
	
	return 0;
}

