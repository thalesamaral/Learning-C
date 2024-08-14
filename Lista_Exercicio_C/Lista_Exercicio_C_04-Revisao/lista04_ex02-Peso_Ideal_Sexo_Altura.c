// Síntese
// Autor: Thales Amaral Lima
// Data: 13/08/2024
/* Objetivo:
Tendo como dados de entrada a altura e o sexo de uma pessoa (M masculino e F feminino), 
construa um programa em C que calcule seu peso ideal, utilizando as seguintes fórmulas:
• para homens: (72.7 * h) - 58;
• para mulheres: (62.1 * h) - 44.7.
*/
#include <stdio.h>
#include <stdlib.h> //system();
#include <ctype.h> //toupper();

int main(void){
//Declarações
	char sexo;
	float alt, pesoIdeal;
	
//Instruções
	do{
		printf("Digite [M] para Masculino\n");
		printf("Digite [F] para Feminino\n");
		printf("Resposta: ");
		scanf("%c",&sexo);
		sexo = toupper(sexo);
		if(sexo != 'M' && sexo != 'F'){
			system("cls");
			printf("Codigo invalido!\n\n");
		}
	}while(sexo != 'M' && sexo != 'F');
	
	printf("\nAltura em centimetros: ");
	scanf("%f",&alt);
	alt /= 100;

	sexo == 'M' ? printf("\nMasculino.\n"):	
	sexo == 'F' ? printf("\nFeminino.\n") : printf("Invalido.\n");

	if(sexo == 'M'){
		pesoIdeal = (72.7 * alt)-58;
	}else if(sexo == 'F'){
		pesoIdeal = (62.1 * alt)-44.7;
	}
	printf("Peso Ideal: %g\n",pesoIdeal);

}
