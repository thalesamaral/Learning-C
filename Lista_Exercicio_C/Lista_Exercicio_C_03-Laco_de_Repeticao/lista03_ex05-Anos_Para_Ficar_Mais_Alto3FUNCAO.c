//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "07/08/2022"
/*	Objetivo: */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int verificarTamanho(float, float, float, float);

int main(void){
setlocale(LC_ALL,"Portuguese");
//Declarações
	int year=0, flag=0;
	float height1=1, grow1=0.1;
	float height2=0.1, grow2=0.2;
//Instruções
	//printf("");
	//scanf("%",&);
	
	do{
		/*printf("Altura de Ze: ");
		scanf("%f",&height1);
		printf("Crescimento por ano: ");
		scanf("%f",&grow1);
		printf("Altura de Chico: ");
		scanf("%f",&height2);
		printf("Crescimento por ano: ");
		scanf("%f",&grow2);*/
		
		if(height1 < height2){
			year = verificarTamanho(height1, height2, grow1, grow2);
		}else{
			year = verificarTamanho(height2, height1, grow2, grow1);
		}
		
		if(year <= 100){
			printf("\nOCORREU maior altura em menos de 100 anos");
			flag=1;
		}else{
			printf("\nNÃO OCORREU maior altura em menos de 100 anos");
		}
	}while(flag == 0);
	
	//system("pause");
	return 0;
}

int verificarTamanho(float alt1, float alt2, float cresc1, float cresc2){
	int year;
	
	while(alt1 <= alt2){
		year++;
		alt1 += cresc1;
		alt2 += cresc2;
	}
	printf("Altura mais baixa.: %.2f\n",alt1);
	printf("Altura mais alta..: %.2f\n",alt2);
	printf("Qtd de anos: %d\n",year);
	
	return year;
}
// FIM *************************************************************************************************************************

