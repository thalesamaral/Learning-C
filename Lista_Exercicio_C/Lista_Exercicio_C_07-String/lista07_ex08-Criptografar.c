//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "01/09/2024"
/*	Objetivo:
8. Criptografia é um processo de codificação de dados que visa a privacidade de acesso às 
informações e o Código de César é uma das mais conhecidas e simples técnicas para isso. 
Neste método são feitas substituições onde cada letra do texto é substituída por outra abaixo 
dela um número de vezes. Por exemplo, se for código três “A” é substituído por “D”, “B” por 
“E”, “Z” por “C”, etc.
Faça um programa em C que receba um texto, criptografe com a código de César 
considerando o código 3 e apresente o texto criptografado. Exemplo: Texto = “A LIGEIRA 
RAPOSA MARROM SALTOU SOBRE O CACHORRO CANSADO”. Criptografado = “D 
OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR”.
*/
#include <stdio.h>
#include <string.h>
#define TAM 255

//Protótipo de Função
void criptografar(char[], int);

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	char texto[TAM];
	int codigo;

//Instruções
	printf("Digite um texto: ");
	fgets(texto, TAM, stdin);
	texto[strlen(texto)-1] = '\0'; //Ignora as casas não utilizadas
	
	printf("\nCodigo para criptografia: ");
	scanf("%d",&codigo);

	criptografar(texto, codigo);
	printf("\nTexto criptografado: %s",texto);
	
	return 0;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************

void criptografar(char str[], int cod) {
    for(size_t i = 0; i < strlen(str); i++){
        char ch = str[i];
        
        // Verifica se o caractere é uma letra maiúscula
        if (ch >= 'A' && ch <= 'Z') {
            ch = (ch - 'A' + cod) % 26 + 'A';
        }
        // Verifica se o caractere é uma letra minúscula (caso o texto possa ter letras minúsculas)
        else if(ch >= 'a' && ch <= 'z'){
            ch = (ch - 'a' + cod) % 26 + 'a';
        }
        
        // Atribui o caractere criptografado de volta à string
        str[i] = ch;
    }
}