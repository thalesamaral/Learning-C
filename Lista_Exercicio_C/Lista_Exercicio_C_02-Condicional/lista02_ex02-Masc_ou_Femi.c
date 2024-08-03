//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "01/12/2021"
/*	Objetivo: */
//  Entrada.: Informar sexo [m]ou[f].
//  Saída...: imprimir a resposta por extenso ou avisar erro.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	char sexo;
	
//Instruções
	//printf("");
	//scanf("%",&);
	
	do{
		printf("Informe o sexo [M]ou[F]: ");
		sexo = getche();
		sexo = toupper(sexo);
		
		if(sexo=='M')
			printf("\nMasculino");
		else if(sexo=='F')
			printf("\nFeminino");
		else
			printf("\n\nOpção invalida, digite novamente!\n\n");
	}while((sexo != 'M') && (sexo != 'F'));
	
	return 0;
}

