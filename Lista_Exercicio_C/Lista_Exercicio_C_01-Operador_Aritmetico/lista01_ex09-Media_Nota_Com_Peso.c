//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "30/11/2021"
/*	Objetivo:  leia três notas de um aluno, calcule e imprima a média do aluno.
Utilize média ponderada com os pesos 2, 3 e 5.
*/
#include<stdio.h>
#include<stdlib.h>

int main(void){
//Variaveis
	float nota[2];
	float media=0;
	int i;
	
//Instruções
	//printf("");
	//scanf("%",&);
	
	for(i=0; i<3; i++){
		printf("Digite a Nota %d: ",i+1);
		scanf("%f",&nota[i]);
		
		if (i == 0)
			nota[i] *= 2;
		else if(i == 1)
			nota[i] *= 3;
		else
			nota[i] *= 5;
		printf("Nota ponderada: %.1f\n\n", nota[i]);
	}
	
	media = (nota[0] + nota[1] + nota[2]);
	
	printf("Media %.1f\n",media/10);
	return 0;
}

