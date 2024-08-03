// Sintese
// Objetivo:
// Autor: Thales Amaral Lima
// Data: 0/0/2020
#include <stdio.h>
#include <conio.h>
#define LIN 3
#define COL 3
int main (){
	
    int mat[LIN][COL] = {0},
        l, c,
        col[COL] = {0};

    for(l=0;l<LIN;l++){
        for(c=0;c<COL;c++){
			printf("Digite o elemento [%d][%d]: ",l,c);
            scanf("%d",&mat[l][c]);
        }
    }
    printf("\n\n=============================================\n\n");

    for(l=0;l<LIN;l++){
	    for(c=0;c<COL;c++)
	       	col[l]=col[l]+mat[c][l];
	}	
	    
    for(l=2;l<LIN;l++){
        for(c=2;c<COL;c++){
			mat[l][c]=col[l];
        }
    }
    
    for(l=0;l<LIN;l++){
		printf("\n");
		for(c=0;c<COL;c++)
			printf("[%i]",mat[l][c]);
	}

	printf("\nLinha 3");
    for(c=0;c<COL;c++)
        printf("[%d]", col[c]);
}
