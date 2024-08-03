// Sintese
// Objetivo:
// Autor: Thales Amaral Lima
// Data: 02/03/2020
#include <stdio.h>
#include <conio.h>
#define tam 5
int main(void){
//Declarações
	int c,ori[tam],pares[tam],impares[tam];
//Instruções

	for(c=0;c<=tam;c++){
		pares[c]=0;
		impares[c]=0;
	}
	for(c=0;c<tam;c++){
		scanf("%i",&ori[c]);
		if(ori[c]%2==0)
			pares[c]=ori[c];
		else
			impares[c]=ori[c];
	}
	printf("==============\n");
	printf("PARES\n");
	for(c=0;c<=tam;c++){
		if(pares[c] != 0)
			printf("%i\n",pares[c]);
	}
	printf("==============\n");
	printf("IMPARES\n");
	for(c=0;c<=tam;c++){
		if(impares[c] != 0)
			printf("%i\n",impares[c]);
	}
	printf("==============\n");
}

