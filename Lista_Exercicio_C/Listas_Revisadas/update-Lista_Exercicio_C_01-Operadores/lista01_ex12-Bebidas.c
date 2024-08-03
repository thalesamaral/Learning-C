//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "01/12/2021"
/*	Objetivo: Imagine a seguinte situação: uma marca de bebidas fornece seus produtos em lata de 350ml,
garrafa de 600ml e garrafa de 2litros. receba a quantidade comprada de cada tipo,
calcule e imprima o total de litros comprados.
*/
#include<stdio.h>
#include<stdlib.h>

int main(void){
//Variaveis
	int opcao;
	int qnt;
	int i;
	int flag=0;
	char resp;
	float litroTotal;
	
//Instruções
	//printf("");
	//scanf("%",&);
	do{
		do{
			printf("Deseja comprar bebidas? [S] ou [N]: ");
			resp = getche();
			resp = toupper(resp);
			printf("\n");
		}while((resp != 'S') && (resp != 'N'));
		
		if (resp == 'S'){
			flag=1;
			do{
				printf("\nOpcao [1] Lata 350ml\n");
				printf("Opcao [2] Garrafa 600ml\n");
				printf("Opcao [3] Garrafa 1L\n");
				printf("Digite uma opcao valida: ");
				scanf("%d",&opcao);
				switch(opcao){
					case 1:
						printf("\nQuantidade: ");
						scanf("%d",&qnt);
						litroTotal += 350*qnt;
					break;
					case 2:
						printf("\nQuantidade: ");
						scanf("%d",&qnt);
						litroTotal += 600*qnt;
					break;
					case 3:
						printf("\nQuantidade: ");
						scanf("%d",&qnt);
						litroTotal += 1000*qnt;
					break;
					default:
						system("cls");
						printf("Opcao invalida\n");
					break;
				}	
			}while((opcao != 1) && (opcao != 2) && (opcao != 3));
		system("cls");
		}else if (flag == 0){
			printf("\nNao foi comprado bebidas");
		}else{
			printf("\nTotal de litros comprados: %.3f", litroTotal/1000);
		}
	}while(resp == 'S');
		
	return 0;
}

