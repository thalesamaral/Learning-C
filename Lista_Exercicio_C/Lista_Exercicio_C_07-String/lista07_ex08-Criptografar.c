//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "19/12/2021"
/*	Objetivo: receba um texto, criptografe com a código de César considerando o código 3 e apresente o texto criptografado. */
//  Entrada.: texto
//  Saída...: texto criptografado
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <locale.h>
#define TAM 60
main(){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	char text[TAM];
	int i, posiMinusc=0, posiMaiusc=0, codigo;

//Instruções
	//printf("");
	//scanf("%",&);

	printf("Digite um texto: ");
	gets(text);
	
	printf("\nCódigo para criptografia: ");
	scanf("%d",&codigo);
	
	for(i=0; i<strlen(text); i++){
		if((text[i] >= 97 && text[i] <= 122)||(text[i] >= 65 && text[i] <= 90)){
			if(text[i] >= 97 && text[i] <= 122){//MÍNUSCULO: 97(a) - 122(z)
				posiMinusc = text[i] - 96;
				if(26%posiMaiusc >= codigo)
					text[i] = (96+codigo) + posiMinusc;
				else
					text[i] = (96+codigo) + (posiMinusc - 26);
			}else 
				if(text[i] >= 65 && text[i] <= 90){//MAIUSCULO: 65(A) - 90(Z)
					posiMaiusc = text[i] - 64;
					if(26%posiMaiusc >= codigo)
						text[i] = (64+codigo) + posiMaiusc;
					else
						text[i] = (64+codigo) + (posiMaiusc - 26);
				}
		}
	}
	
	printf("\n====================\n");
	printf("\nCriptografando...\n");
	printf("====================\n\n");
	
	//system("pause");
	
	printf("\nResultado: %s",text);
	
	return 0;
}



// FIM *************************************************************************************************************************

