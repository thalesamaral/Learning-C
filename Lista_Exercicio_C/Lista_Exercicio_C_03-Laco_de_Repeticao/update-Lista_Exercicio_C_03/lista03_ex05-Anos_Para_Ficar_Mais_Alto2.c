//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "07/08/2022"
/*	Objetivo: */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
//Declarações
	int year=0, flag=0;
	float height1=0.1, grow1=0.2;
	float height2=1, grow2=0.1;
//Instruções
	//printf("");
	//scanf("%",&);
	
	do{
		/*printf("Altura de Ana: ");
		scanf("%f",&height1);
		printf("Crescimento por ano: ");
		scanf("%f",&grow1);
		printf("Altura de Bob: ");
		scanf("%f",&height2);
		printf("Crescimento por ano: ");
		scanf("%f",&grow2);*/
		
		if(height1 < height2){
			while(height1 <= height2){
				year++;
				height1 += grow1;
				height2 += grow2;
			}
			printf("Ana altura.: %.2f\n",height1);
			printf("Bob altura.: %.2f\n",height2);
			printf("Qtd de anos: %d\n",year);
		}else{
			while(height2 <= height1){
				year++;
				height1 += grow1;
				height2 += grow2;
			}
			printf("Ana altura.: %.2f\n",height1);
			printf("Bob altura.: %.2f\n",height2);
			printf("Qtd de anos: %d\n",year);
		}
		
		if(year <= 100){
			printf("\nOCORREU maior altura em menos de 100 anos");
			flag=1;
		}else{
			printf("\nN�O OCORREU maior altura em menos de 100 anos");
		}
	}while(flag == 0);
	
	//system("pause");
	return 0;
}

// FIM *************************************************************************************************************************

