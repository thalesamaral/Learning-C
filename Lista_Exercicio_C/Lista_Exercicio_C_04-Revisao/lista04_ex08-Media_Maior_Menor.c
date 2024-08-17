// Síntese
// Autor: Thales Amaral Lima
// Data: 0/0/2024
/* Objetivo: */
#include <stdio.h>

int main(void){
//Declarações
	float media=0, maior, menor, cont=0, total=0;
	int flag=0;

//Instruções

	//printf("");
	//scanf("%i",&);
	
	while(media >= 0){
		printf("Qual a media do aluno:");
		scanf("%f",&media);
		if (media >= 0){
			if (media>maior)
				maior=media;
			if (media<menor)
				menor=media;
			while(flag==0){
				menor=media;
				flag=1;
			}
			cont ++;
			total += media;
		
		}else
			printf("Negativo\n");
	}
	printf("maior media %f\n",maior);
	printf("menor media %f\n",menor);
	printf("Media da turma %f\n",total/cont);
}

