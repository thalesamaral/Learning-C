//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "19/12/2021"
/*	Objetivo: receba um texto criptografado pelo m�todo da quest�o anterior, 
decriptografe e apresente o texto.*/
//  Entrada.: texto
//  Sa�da...: texto descriptografado
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 15

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	char text[TAM];
	int i, posiMinusc=0, posiMaiusc=0, codigo;

//Instruções
	printf("Digite um texto: ");
	gets(text);
	
	printf("\nC�digo para decriptografia: ");
	scanf("%d",&codigo);
	
	for(i=0; i<strlen(text); i++){
		if((text[i] >= 97 && text[i] <= 122)||(text[i] >= 65 && text[i] <= 90)){
			if(text[i] >= 97 && text[i] <= 122){//M�NUSCULO: 97(a) - 122(z)
				posiMinusc = text[i] - 96;
				if(posiMinusc > codigo)
					text[i] = (96-codigo) + posiMinusc;
				else
					text[i] = (96-codigo) + posiMinusc + 26;
			}else 
				if(text[i] >= 65 && text[i] <= 90){//MAIUSCULO: 65(A) - 90(Z)
					posiMaiusc = text[i] - 64;
					if(posiMaiusc > codigo)
						text[i] = (64-codigo) + posiMaiusc;
					else
						text[i] = (64-codigo) + posiMaiusc + 26;
				}
		}
	}
	
	printf("\n====================\n");
	printf("Descriptografando...\n");
	printf("====================\n\n");
		
	printf("\nResultado: %s",text);
	
	return 0;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************
