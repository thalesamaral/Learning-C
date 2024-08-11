//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "11/08/2024"
/*	Objetivo:
Um professor deseja automatizar seu sistema de pontuação. Ele faz 21 provas por semestre 
e então calcula a média usando apenas as 20 maiores notas. Uma média de 9.0 ou mais 
ganha um grau A; 8.0 a 8.9, um grau B; 7.0 a 7.9, um grau C; e 0.0 a 6.9, um grau D. Faça 
um programa em C que receba o nome do estudante e suas 21 notas de prova, encontre as 
20 maiores, calcule e imprima a média e o grau correspondente para cada um dos alunos. 
O programa deve encerrar quando for digitado "fim" para o nome.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define ALUNOS 3

int main(void){
//Declarações
	char nome[25];
	float media, nota, notaMenor=10, notaTotal=0;
	int i;
	
//Instruções
	fflush(stdin); setbuf(stdin, 0);
	printf("Digite -fim- para finalizar!\n");
	printf("Nome do aluno: ");
	scanf("%s",nome);

	while(!(nome[0]=='f' && nome[1]=='i' && nome[2]=='m' && nome[3]=='\0')){
		for(i=1; i<=ALUNOS; i++){
			do{
				printf("%do Nota do %s: ",i,nome);
				scanf("%f",&nota);
			}while((nota<0) || (nota>10));
			
			if(nota < notaMenor)
				notaMenor = nota;
				
			notaTotal += nota;
		}

		printf("==========================\n");
		notaTotal -= notaMenor;
		media = notaTotal/(ALUNOS-1);
		printf("Media: %.2f\n",media);
		
		if(media >= 9)
			printf("Grau A\n");
		else if(media >= 8)
			printf("Grau B\n");
		else if(media >= 7)
			printf("Grau C\n");
		else if(media < 7)
			printf("Grau D\n");
		printf("==========================\n\n");
		
		notaTotal = 0;
		notaMenor = 10;
		
		fflush(stdin); setbuf(stdin, 0);
		printf("Digite -fim- para finalizar!\n");
		printf("Nome do novo aluno: ");
		scanf("%s",nome);
	}
	
	return 0;
}

