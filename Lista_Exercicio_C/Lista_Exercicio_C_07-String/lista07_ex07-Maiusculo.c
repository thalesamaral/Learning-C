//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "01/09/2024"
/*	Objetivo:
7. Faça um programa em C que receba um texto, converta todos os caracteres deste para 
maiúsculo e apresente o texto após convertido. Observação: o código ASCII da letra ‘a’ 
(minúsculo) é 97 e o código da letra ‘A’ (maiúsculo) é 65, o código da letra ‘z’ é 122 e o código 
da letra ‘Z’ é 90. Não utilize nenhuma função além das vistas na aula.
*/
#include <stdio.h>
#include <string.h>
#define TAM 255

//Protótipo de Função
void maiusculo(char[]);

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	char texto[TAM];

//Instruções
	printf("Digite um texto: ");
	fgets(texto, TAM, stdin);
	texto[strlen(texto)-1] = '\0'; //Ignora as casas não utilizadas
	
	maiusculo(texto);
	printf("\nTexto em maiusculo: %s\n",texto);
	
	return 0;
}

void maiusculo(char str[]){
	size_t i;
	
	for(i=0; i<strlen(str); i++){
		if((str[i] >= 'a') && (str[i] <= 'z')){
			str[i] -= 32;
		}
	}
}
//*** FIM DO BLOCO PRINCIPAL **********************************************

/*
No código C, a variável texto[] é passada para a função maiusculo() como um argumento, e qualquer modificação feita na variável dentro da função maiusculo() é refletida no bloco principal (main). Isso ocorre porque, em C, arrays são passados para funções como ponteiros.

Quando você passa um array para uma função, o que é realmente passado é o endereço de memória do primeiro elemento do array. Isso significa que a função maiusculo() não recebe uma cópia do array, mas sim uma referência ao array original. Assim, quando você altera o conteúdo do array dentro da função, você está alterando diretamente o conteúdo da variável original, que é acessada por referência.

Declaração da Função: A função maiusculo(char str[]) recebe um array de caracteres como argumento. Na prática, char str[] é equivalente a char *str, ou seja, um ponteiro para o primeiro elemento do array.

Esse comportamento é típico em C, onde a passagem de arrays para funções é feita por referência, ao contrário da passagem de variáveis escalares (como int ou float), que é feita por valor (cópia).
*/

/* OUTRA SOLUÇÃO
	for(i=0; i<strlen(texto); i++){
		if(texto[i] >= 97 && texto[i] <= 122){
			posiMinusc = texto[i] - 96;
			texto[i] = 64 + posiMinusc;
		}
	}
*/
