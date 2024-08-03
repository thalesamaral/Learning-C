// Sintese
// Objetivo:
// Autor: Thales Amaral Lima
// Data: 0/0/2020
#include <stdio.h>
#include <conio.h>
#define LIN 3
#define COL 3
int main(void){
//Declarações
	int matriz[LIN][COL],soma[LIN][COL],soma1[LIN][COL],soma2[LIN][COL];
	int l,c,a;
//Instruções

	printf("Digite numeros para linha e coluna\n");
	for(l=0;l<LIN-1;l++){
		for(c=0;c<COL;c++){
			printf("[%i][%i]: ",l+1,c+1);
			scanf("%i",&matriz[l][c]);
		}
	}
	
	for(l=0;l<LIN-1;l++){
		for(c=0;c<COL;c++){
			if(l==0){
				soma1[0][a]=matriz[l][c];
			}else if(l==1){
					soma2[1][a]=matriz[l][c];
					a++;
			}
		}
	}
	
	for(l=0;l<LIN-1;l++){
		for(c=0;c<COL;c++){
			soma[l][c]=soma1[l][c]+soma1[l][c];
		}
	}
	
	for(l=1;l<LIN;l++){
		for(c=0;c<COL;c++){
			printf("%i\n",&soma[l][c]);
		}
	}
	
	/*for(l2=0;l2<LIN-1;l2++){
		for(c2=0;c2<COL;c2++){
			scanf("%i",&matriz[l2][c2]);
		}
	}*/
	
}

