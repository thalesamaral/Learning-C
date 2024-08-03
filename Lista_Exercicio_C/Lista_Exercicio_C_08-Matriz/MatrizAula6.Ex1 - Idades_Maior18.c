//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "07/09/2022"
/*	Objetivo: Elabore um programa que armazene a idade de até 10 pessoas,
apresente a média de todas as idades informadas, quantas idades são
maiores que 18 anos e a posição do vetor onde as idades maiores de 18
anos ocorrem.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define MAX 3
int main(void){
setlocale(LC_ALL,"Portuguese");
//Declarações
	int idade[MAX], maior18[MAX];
	int i, qtdMaior18=0, soma=0;
	
//Instruções
	//printf("");
	//scanf("%",&);
	
	for(i=0; i<MAX; i++){
		printf("Digite a idade %d: ",i+1);
		scanf("%d",&idade[i]);
		soma += idade[i];
		
		if(idade[i]>18){
			maior18[i] = i;
			qtdMaior18 ++;
		}else
			maior18[i] = -1;
	}
	
	printf("\nMedia de idades: %.2f\n",((soma*1.0) / MAX));
	printf("Quantidade de idades Maior 18: %d\n\n",qtdMaior18);
	
	for(i=0; i<MAX; i++){
		if(maior18[i] != -1)
			printf("A idade na posição %d é maior que 18\n",i);
	}
	
	system("pause");
	return 0;
}
// FIM *************************************************************************************************************************


