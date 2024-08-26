//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "24/08/2024"
/*	Objetivo:
8. Faça um programa em C que contenha SOMENTE UM subprograma. Considere que um 
professor deseja automatizar seu sistema de pontuação. Ele faz 21 provas por semestre e 
então calcula a média usando apenas as 20 maiores notas. Uma média de 9.0 ou mais 
ganha um grau A; 8.0 a 8.9, um grau B; 7.0 a 7.9, um grau C; e 0.0 a 6.9, um grau D. É 
necessário que seu programa como um todo leia o número da matrícula do estudante e suas 
21 notas de prova, encontre as 20 maiores, calcule e imprima a média e o grau 
correspondente para somente um aluno e encerre sua execução.
*/
//  Entrada : nome, nota.
//  Saida   : media do aluno sem a nota menor, grau da media.
#include<stdio.h>
#define QTD_NOTA 3
#define BARRA_DUPLA printf("==========================\n");

//Protótipo de Função
float media_sem_menor_nota();

int main(void){
//Declarações
	float media;
	
//Instruções
	printf("Uma media de 9.0 a 10 ganha um grau A;\n");
	printf("Uma media de 8.0 a 8.9 ganha um grau B;\n");
	printf("Uma media de 7.0 a 7.9 ganha um grau C;\n");
	printf("Uma media de 0.0 a 6.9 ganha um grau D;\n\n");

	media = media_sem_menor_nota();

	printf("Media: %.2f\n",media);
	
	if(media >= 9)
		printf("grau A\n");
	else if(media >= 8)
		printf("grau B\n");
	else if(media >= 7)
		printf("grau C\n");
	else if(media < 7)
		printf("grau D\n");
	
	BARRA_DUPLA
	
	return 0;
}

float media_sem_menor_nota(){
	float nota, notaMenor=10, notaTotal=0;
	int i;

	for(i=1; i<=QTD_NOTA; i++){
		do{
			printf("%do Nota: ",i);
			scanf("%f",&nota);
		}while((nota<0) || (nota>10));
		
		if(nota<notaMenor){
			notaMenor = nota;				
		}
		
		notaTotal += nota;
		
		printf("Total: %.2f\n",notaTotal);
		BARRA_DUPLA
	}
		notaTotal -= notaMenor;
		printf("Total sem menor nota: %.2f\n\n",notaTotal);
		
		return notaTotal/(QTD_NOTA-1);
}
