// Sintese
// Objetivo:
// Autor: Thales Amaral Lima
// Data: 29/09/2020
#include <stdio.h>
#include <string.h>

// Função recursiva para verificar se a palavra é palíndromo
int palindromo(char palavra[], int tam, int posicao) {

    if (posicao < tam / 2)
	{
        if (palavra[posicao] == palavra[tam - posicao - 1])
            return 1 * palindromo(palavra, tam, posicao+1);
        else
            return 0;
    }
    else
        return 1;
}

int main() {
   char palavra[50];
   int tamanho;

   printf ("Digite a palavra: \n");   
   gets(palavra);

   tamanho = strlen(palavra);

   if (palindromo(palavra, tamanho, 0))
      printf("Eh palindromo\n");
   else
      printf("Nao eh palindromo\n");

   return 0;
}
