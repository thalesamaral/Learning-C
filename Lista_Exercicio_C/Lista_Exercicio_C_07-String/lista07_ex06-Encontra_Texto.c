//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "31/08/2024"
/*	Objetivo:
6. Faça um programa em C que receba uma frase e um texto do usuário e verifique se o texto 
aparece na frase. Não utilizar função pronta!
*/
#include <stdio.h>
#include <string.h>
#define TAM 255

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	//char frase[] = "receba uma frase", texto[] = "uma";
	char frase[TAM], texto[TAM];
	int i, j, k, tamanhoFrase, tamanhoTexto, achou=0;
//Instruções
	
	//
	printf("Digite uma frase: ");
	fgets(frase, TAM, stdin);
	printf("Insira um texto para ser encontrado: ");
	fgets(texto, TAM, stdin);
	//
	
	frase[strlen(frase)-1] = '\0'; //Limpa as casas não utilizadas
	texto[strlen(texto)-1] = '\0'; //Limpa as casas não utilizadas
	tamanhoFrase = strlen(frase);
	tamanhoTexto = strlen(texto);
	
	printf("\nTamanho frase: %d\n",tamanhoFrase);
	printf("Tamanho palavra: %d\n",tamanhoTexto);
	
	for(i=0; frase[i] != '\0'; i++){
		// Se encontrar o início do texto, iniciar a comparação
		if(frase[i] == texto[0]){
			j=i;
			k=0;
			while(frase[j] == texto[k] && texto[k] != '\0') {
                j++;
                k++;
            }
            // Se todas as letras baterem, o texto foi encontrado
            if (texto[k] == '\0') {
                achou = 1;
                break;
            }
		}
	}
	
	if(achou){
		printf("\nTexto encontrado na frase\n");
	}else{
		printf("\nTexto NAO encontrado na frase\n");
	}
	
	return 0;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************
