// Sintese
// Objetivo:
// Autor: Thales Amaral Lima
// Data: 08/03/2020
#include <stdio.h>
#include <conio.h>
#define LIN 5
#define COL 3
int main(void){
//Declarações
	int matriz[LIN][COL];
	int l,c,maior=0,linha,coluna;
//Instruções

	printf("Digite numeros para a matriz\n");
	for(l=0;l<LIN;l++){
		for(c=0;c<COL;c++){
			scanf("%i",&matriz[l][c]);
		}
	}
	
	for(l=0;l<LIN;l++){
		for(c=0;c<COL;c++){
			if(matriz[l][c]>maior){
				maior=matriz[l][c];
				linha=l+1;
				coluna=c+1;
			}
		}
	}
	for(l=0;l<LIN;l++){
		printf("\n",matriz[l][c]);
		for(c=0;c<COL;c++){
			printf("[%i]",matriz[l][c]);
		}
	}
	printf("\nMaior: %i\n",maior);
	printf("linha: %i\n",linha);
	printf("coluna: %i\n",coluna);
}

