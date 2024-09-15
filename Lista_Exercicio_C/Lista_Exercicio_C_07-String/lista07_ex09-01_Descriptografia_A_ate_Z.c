//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "15/09/2024"
/*	Objetivo:
9. Faça um programa em C que receba um texto criptografado pelo método da questão anterior, 
descriptografe e apresente o texto.
Criptografado = "D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR"
Criptografado = "Kjqne fvzjqj vzj ywfsxkjwj t vzj xfgj j fuwjsij t vzj jsxnsf. Htwf Htwfqnsf." Código 5
*/
#include <stdio.h>
#include <string.h>
#define TAM 255

//Protótipo de Função
void descriptografar(char[], int);

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	char texto[TAM], textoAux[TAM];
	int codigo;

//Instruções
	printf("Digite um texto: ");
	fgets(texto, TAM, stdin);
	texto[strlen(texto)-1] = '\0'; //Ignora as casas não utilizadas

	strcpy(textoAux, texto);

	do{
        printf("\nDigite - Codigo para descriptografia ou 0 para Sair");
        printf("\nResposta: ");
        scanf("%d",&codigo);

        if(codigo){
            descriptografar(texto, codigo);
            printf("Texto Descriptografado: %s\n",texto);
            strcpy(texto, textoAux);
        }else{
            printf("\n *** Fim do programa *** \n");
        }
    }while(codigo);
	
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
