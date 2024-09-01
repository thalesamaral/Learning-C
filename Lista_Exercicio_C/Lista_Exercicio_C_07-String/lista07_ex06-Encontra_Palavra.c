//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "31/08/2024"
/*	Objetivo:
6. Faça um programa em C que receba uma frase e uma palavra do usuário e verifique se a 
palavra aparece na frase. Não utilizar função pronta!
*/
#include <stdio.h>
#include <string.h>
#define TAM 255

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	//char frase[] = "receba uma frase", palavra[] = "uma";
	char frase[TAM], palavra[TAM];
	int i, j, k, tamanhoFrase, tamanhoPalavra, achou=0;
//Instruções
	
	//
	printf("Digite uma frase: ");
	fgets(frase, TAM, stdin);
	printf("Digite uma palavra para ser encontrada: ");
	fgets(palavra, TAM, stdin);
	//
	
	frase[strlen(frase)-1] = '\0'; //Limpa as casas não utilizadas
	palavra[strlen(palavra)-1] = '\0'; //Limpa as casas não utilizadas
	tamanhoFrase = strlen(frase);
	tamanhoPalavra = strlen(palavra);
	
	printf("\nQuantidade frase: %d\n",tamanhoFrase);
	printf("Quantidade palavra: %d\n",tamanhoPalavra);
	
	for(i=0; frase[i] != '\0'; i++){
		// Se encontrar o início da palavra, iniciar a comparação
		if(frase[i] == palavra[0]){
			j=i;
			k=0;
			while(frase[j] == palavra[k] && palavra[k] != '\0') {
                j++;
                k++;
            }
            // Se todas as letras baterem, a palavra foi encontrada
            if (palavra[k] == '\0') {
                achou = 1;
                break;
            }
		}
	}
	
	if(achou){
		printf("\nPalavra encontrada na frase\n");
	}else{
		printf("\nPalavra NAO encontrada na frase\n");
	}
	
	return 0;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************
