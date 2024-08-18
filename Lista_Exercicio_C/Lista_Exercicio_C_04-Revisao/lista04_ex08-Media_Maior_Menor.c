// Síntese
// Autor: Thales Amaral Lima
// Data: 18/08/2024
/* Objetivo:
Faça um programa em C que leia as médias finais de vários alunos de uma turma e mostre 
a maior média, a menor média e a média aritmética da turma. O programa para quando 
encontrar uma média negativa.
*/
#include <stdio.h>

int main(void){
//Declarações
	float media=0, maior=0, menor, qtdAluno=0, totalMedia=0;
	int flag=1;

//Instruções
	printf("Digite um valor negativo para finalizar!\n");
	while(media >= 0){
		printf("Media do aluno: ");
		scanf("%f",&media);
		if(media >= 0){
			//VERIFICA MAIOR
			if(media>maior){
				maior=media;
			}
			//INICIA MENOR
			if(flag){
				menor=media;
				flag=0;
			}
			//VERIFICA MENOR
			if(media<menor){
				menor=media;
			}
			qtdAluno ++;
			totalMedia += media;
		}else{
			printf("\nNegativo confirmado!\n\n");
		}
	}
	
	if(qtdAluno){
		printf("Media da turma %g\n",totalMedia/qtdAluno);
		printf("Maior media %g\n",maior);
		printf("Menor media %g\n",menor);
	}
}

