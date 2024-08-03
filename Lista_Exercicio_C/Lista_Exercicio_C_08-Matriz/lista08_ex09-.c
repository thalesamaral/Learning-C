//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "22/12/2021"
/*	Objetivo: */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define LIN 3
#define COL 3
void verificaMes(int c);

int main(void){
setlocale(LC_ALL,"Portuguese");
//Declarações
	int m[LIN][COL];
	int l, c, maiorAno, menorAno, maiorTotal=0, menorTotal=0, mesMaior=0, mesMenor=0;

//Instruções
	//printf("");
	//scanf("%",&);
	
	//LEITURA
	for(l=0;l<LIN;l++){
		for(c=0;c<COL;c++){
			printf("Ano %d. Mês %d Temperatura Media: ",l+1,c+1);
			scanf("%d",&m[l][c]);
		}
		printf("\n");
	}
	
	//MATRIZ
	for(l=0; l<LIN; l++){
		for(c=0; c<COL; c++){
			printf("[%d]",m[l][c]);
		}
		printf("\n");
	}
	
	for(l=0;l<LIN;l++){
		for(c=0;c<COL;c++){
			if(c==0){
				maiorAno = m[l][c];
				menorAno = m[l][c];
				mesMaior = c+1;
				mesMenor = c+1;
			}else
				if(m[l][c] > maiorAno){
					maiorAno = m[l][c];
					mesMaior = c+1;
				}else
					if(m[l][c] < menorAno){
						menorAno = m[l][c];
						mesMenor = c+1;
					}
		}
		printf("\nMaior temperatura do %dº Ano: %d ",l+1,maiorAno);
		verificaMes(mesMaior);
		printf("\nMenor temperatura do %dº Ano: %d ",l+1,menorAno);
		verificaMes(mesMenor);
		printf("\n");
		if(l==0){
			maiorTotal = maiorAno;
			menorTotal = maiorAno;
		}else
			if(maiorAno > maiorTotal)
					maiorTotal = maiorAno;
		if(menorAno < menorTotal)
			menorTotal = menorAno;
			
		maiorAno=0;
		menorAno=0;
	}
	
	printf("\nMaior temperatura: %d",maiorTotal);
	printf("\nMenor temperatura: %d",menorTotal);
		
	return 0;
}

void verificaMes(int mes){
	
	switch(mes){
		case 1:
			printf("Janeiro");
		break;
		case 2:
			printf("Fevereiro");
		break;
		case 3:
			printf("Março");
		break;
		case 4:
			printf("Abril");
		break;
		case 5:
			printf("Maio");
		break;
		case 6:
			printf("Junho");
		break;
		case 7:
			printf("Julho");
		break;
		case 8:
			printf("Agosto");
		break;
		case 9:
			printf("Setembro");
		break;
		case 10:
			printf("Outubro");
		break;
		case 11:
			printf("Novembro");
		break;
		case 12:
			printf("Dezembro");
		break;
	}
}

// FIM *************************************************************************************************************************

