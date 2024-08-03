//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "01/12/2021"
/*	Objetivo: receba a quantidade de moedas, calcule e imprima o valor total em reais. 
Considere moedas de 1, 5, 10, 25 e 50 centavos e moeda de 1 real.
*/
#include<stdio.h>
#include<stdlib.h>

int main(void){
//Variaveis
	int moeda;
	float valorTotal;
	int qntMoedas, i;
	
//Instruções
	//printf("");
	//scanf("%",&);
	printf("Quantidade de moedas: ");
	scanf("%d",&qntMoedas);
	
	for(i=0; i<qntMoedas; i++){
		do{
			printf("\nMoedas: %d\n", qntMoedas -i);
			printf("Opcao [1] 1 centavo\n");
			printf("Opcao [2] 5 centavo\n");
			printf("Opcao [3] 10 centavos\n");
			printf("Opcao [4] 25 centavos\n");
			printf("Opcao [5] 50 centavos\n");
			printf("Opcao [6] 1 real\n");
			printf("Digite uma Opcao valida: ");
			scanf("%d",&moeda);
			switch(moeda){
				case 1:
					valorTotal += 0.01;
				break;
				case 2:
					valorTotal += 0.05;
				break;
				case 3:
					valorTotal += 0.10;
				break;
				case 4:
					valorTotal += 0.25;
				break;
				case 5:
					valorTotal += 0.50;
				break;
				case 6:
					valorTotal += 1;
				break;
				default:
					system("cls");
					printf("Opcao invalida\n");
				break;
			}
		}while((moeda != 1) && (moeda != 2) && (moeda != 3) && (moeda != 4) && (moeda != 5) && (moeda != 6));
		system("cls");
	}
	
	printf("\nO valor em reais: %.2f", valorTotal);
	
	return 0;
}

