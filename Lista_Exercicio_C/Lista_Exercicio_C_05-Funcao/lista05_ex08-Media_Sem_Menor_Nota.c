//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "11/12/2021"
/*	Objetivo: SOMENTE UM SUBPROGRAMA_receba o nome do estudante e suas 11 notas de prova, encontre as 10 maiores, 
calcule e imprima a média e o grau correspondente para cada um dos alunos.*/
//  Entrada : nome, nota.
//  Saída   : media do aluno sem a nota menor, grau da media.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#define ALUNOS 3
//Protótipo de Função

int main(void){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	char nome[10];
	float media, nota, notaMenor=10, notaTotal=0;
	int i, flag;
	
//Instruções
	//printf("");
	//scanf("%",&);
	
	printf("Nome do aluno: ");
	//scanf("%s",nome);
	gets(nome);
	flag=1;
	do{
		for(i=1; i<=ALUNOS; i++){
			do{
				printf("%dª Nota do %s: ",i,nome);
				scanf("%f",&nota);
			}while((nota<0) || (nota>10));
			
			if(nota<notaMenor)
				notaMenor = nota;
				
			notaTotal += nota;
			printf("%.0f\n\n",notaTotal);
		}
		printf("==========================\n");
		printf("Total: %.0f\n",notaTotal);
		notaTotal -= notaMenor;
		printf("Total sem menor nota: %.0f\n",notaTotal);
		media = notaTotal/(ALUNOS);
		printf("Média: %.2f\n",media);
		
		if(media >= 9)
			printf("grau A\n");
		else if(media >= 8)
			printf("grau B\n");
		else if(media >= 7)
			printf("grau C\n");
		else if(media < 7)
			printf("grau D\n");
		printf("==========================\n\n");
		
		notaTotal = 0;
		notaMenor = 10;
		
		printf("Digite -fim- para finalizar!\n");
		printf("Nome do novo aluno: ");
		scanf("%s",&nome);
		
		if (strcmp(nome, "fim")==0)
			flag=0;
			
	}while(flag != 0);
	
	return 0;
}

