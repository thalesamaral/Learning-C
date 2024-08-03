//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "01/12/2021"
/*	Objetivo:  receba o número de eleitores de um município, o número de votos em branco, 
nulos e válidos de uma eleição, calcule e imprima o percentual que cada um representa em relação ao
número de eleitores do município.
*/
#include<stdio.h>
#include<stdlib.h>

int main(void){
//Variaveis
	int i;
	int opcao;
	int numEleitores;
	float vValido=0;
	float vBranco=0;
	float vNulo=0;
	
//Instruções
	//printf("");
	//scanf("%",&);
	
	printf("Informe o numero de eleitores do municipio: ");
	scanf("%d",&numEleitores);
	
	for(i=0; i<numEleitores; i++){
		do{
			printf("\nEleitor: %d\n", i+1);
			printf("Opcao [1] Voto Valido\n");
			printf("Opcao [2] Voto Branco\n");
			printf("Opcao [3] Voto Nulo\n");
			printf("Digite sua opcao de voto: ");
			scanf("%d",&opcao);
			switch(opcao){
				case 1:
					vValido++;
				break;
				case 2:
					vBranco++;
				break;
				case 3:
					vNulo++;
				break;
				default:
					system("cls");
					printf("Opcao invalida!\n");
				break;
			}
		}while((opcao!=1) && (opcao!=2) && (opcao!=3));
		system("cls");
	}
	
	printf("\nPercentual de votos por eleitores\n");
	printf("Votos Validos: %.2f%%\n",(vValido*100/numEleitores));
	printf("Votos Brancos: %.2f%%\n",(vBranco*100/numEleitores));
	printf("Votos Nulos: %.2f%%\n",(vNulo*100/numEleitores));
	
	return 0;
}

