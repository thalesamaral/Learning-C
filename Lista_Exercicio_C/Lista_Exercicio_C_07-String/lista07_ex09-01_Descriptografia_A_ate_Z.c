//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "01/09/2024"
/*	Objetivo:
9. Faça um programa em C que receba um texto criptografado pelo método da questão anterior, 
descriptografe e apresente o texto.
*/
#include <stdio.h>
#include <string.h>
#define TAM 255

//Protótipo de Função
void descriptografar(char[], int);

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	char texto[]="AB YZ";
	int codigo=1;

//Instruções
	/*printf("Digite um texto: ");
	fgets(texto, TAM, stdin);*/
	//texto[strlen(texto)-1] = '\0'; //Ignora as casas não utilizadas
	
	/*printf("\nCodigo para criptografia: ");
	scanf("%d",&codigo);*/

	descriptografar(texto, codigo);
	printf("\nTexto Descriptografado: %s",texto);
	
	return 0;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************

void descriptografar(char str[], int cod) {
    for(size_t i = 0; i < strlen(str); i++){
        char ch = str[i];
        
        // Verifica se o caractere é uma letra maiúscula
        if (ch >= 'A' && ch <= 'Z') {
            ch = (ch - 'A' - cod + 26) % 26 + 'A';
        }
        // Verifica se o caractere é uma letra minúscula (caso o texto possa ter letras minúsculas)
        else if(ch >= 'a' && ch <= 'z'){
            ch = (ch - 'a' - cod + 26) % 26 + 'a';
        }
        
        // Atribui o caractere criptografado de volta à string
        str[i] = ch;
    }
}
