// Sintese
//   objetivo "A02E10 - Contar a quantidade de consoantes de uma frase"
//   autor "Edson F. da Fonseca"
//   data "30/03/2020"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char frase[50];
	int i, soma=0;
	
	printf("Digite uma frase: ");
	gets(frase);
	
	for (i=0; i<strlen(frase); i++) {
		if ((((frase[i] >= 97) && (frase[i] <= 122)) ||
		   ((frase[i] >= 65) && (frase[i] <= 90))) &&
		   (frase[i] != 'a') && (frase[i] != 'e') && (frase[i] != 'i') && (frase[i] != 'o') && (frase[i] != 'u') && (frase[i] != 'A') && (frase[i] != 'E') && (frase[i] != 'I') && (frase[i] != 'O') && (frase[i] != 'U'))
			soma++;
	}
	printf("A frase possui %d consoantes", soma);
	
	return 0;
}
