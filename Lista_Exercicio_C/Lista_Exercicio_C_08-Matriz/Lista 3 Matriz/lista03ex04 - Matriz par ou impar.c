// Sintese
// Objetivo:
// Autor: Thales Amaral Lima
// Data: 08/03/2020
#include <stdio.h>
#include <conio.h>
#define LIN 5
#define COL 2
int main(void){
//Declarações
	int matriz[LIN][COL];
	int l,c,par=0,impar=0;
//Instruções

	printf("Digite numeros para linha e coluna\n");
	//LEITURA
	for(l=0;l<LIN;l++){
		for(c=0;c<COL;c++){
			scanf("%i",&matriz[l][c]);
		}
	}
	//QUADRO
	for(l=0;l<LIN;l++){
		printf("\n",matriz[l][c]);
		for(c=0;c<COL;c++){
			printf("[%i]",matriz[l][c]);
		}
	}
	//VERIFICAR PARES
	for(l=0;l<LIN;l++){
		for(c=0;c<COL;c++){
			if(matriz[l][c]%2==0)
				par++;
			else
				impar++;
		}
	}
	printf("\nPar: %i\n",par);
	printf("Impar: %i\n",impar);
}

