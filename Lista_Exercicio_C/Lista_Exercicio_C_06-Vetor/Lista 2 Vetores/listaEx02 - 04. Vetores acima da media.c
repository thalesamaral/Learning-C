// Sintese
// Objetivo:
// Autor: Thales Amaral Lima
// Data: 01/03/2020
#include <stdio.h>
#include <conio.h>
#define tam 5
int main(void){
//Declara��es
	float media=0;
	int c,quant=0,total=0,nota[tam];
//Instru��es
	printf("Digite a nota dos 20 alunos\n");
	for(c=0;c<tam;c++){
		scanf("%i",&nota[c]);
		total += nota[c];
	}
	media = total/tam;
	printf("Total: %i \n",total);
	printf("Media: %f \n",media);
	for(c=0;c<tam;c++){
		if(nota[c]>media)
			quant++;
	}
	printf("Elementos acima da media: %i",quant);
}

