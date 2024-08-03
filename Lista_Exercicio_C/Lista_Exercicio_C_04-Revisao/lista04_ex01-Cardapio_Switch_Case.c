#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
setlocale(LC_ALL,"Portuguese");
//Declarações
	int cod, quant;
	float conta;
//Instruções
	printf("Especificação  |Código|Preço\n");
	printf("Cachorro quente|0     |1,20\n");		
	printf("Bauru simples  |1     |1,30\n");
	printf("Bauru com ovo  |2     |1,50\n");
	printf("Hamburguer     |3     |1,20\n");
	printf("X Burguer      |4     |1,30\n");
	printf("Refrigerante   |5     |1,00\n");
	
	printf("Digite o codigo para o pedido\n");
	do{
		scanf("%i",&cod);
		if(cod < 0 || cod > 5)
			printf("Codigo invalido\n");
	}while(cod < 0 || cod > 5);
	
	printf("Quantas unidades?\n");
	scanf("%i",&quant);
		
	switch(cod){
		case 0:
			printf("Cachorro quente foi escolhido\n");
			conta = quant * 1.20;
			printf("O valor da conta eh %f",conta);
		break;
		case 1:
			printf("Bauru simples  foi escolhido\n");
			conta = quant * 1.30;
			printf("O valor da conta eh %f",conta);
		break;
		case 2:
		printf("Bauru com ovo foi escolhido");
			conta = quant * 1.50;
			printf("O valor da conta eh %f",conta);
		break;
		case 3:
			printf("Hamburguer  foi escolhido\n");
			conta = quant * 1.20;
			printf("O valor da conta eh %f",conta);
		break;
		case 4:
			printf("X Burguer foi escolhido\n");
			conta = quant * 1.30;
			printf("O valor da conta eh %f",conta);
		break;
		case 5:
			printf("Refrigerante foi escolhido\n");
			conta = quant * 1.00;
			printf("O valor da conta eh %f",conta);
		break;
		default:
	           printf("Opcao invalida\n");
	    break;
	}
}

