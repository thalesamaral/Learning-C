//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "04/08/2024"
/*	Objetivo:
Faça um programa em C que receba as informações que forem necessárias para imprimir a 
categoria que o sócio de um clube terá. Considere os seguintes requisitos:
• PADRÃO: categoria inicial para qualquer sócio;
• BRONZE: ter no mínimo 10 anos na categoria padrão, ou uma renda mensal mínima de R$ 3.000,00;
• PRATA: ter no mínimo 5 anos na categoria bronze, ou uma renda mensal mínima de R$ 5.000,00;
• OURO: ter no mínimo 20 anos na categoria prata e uma renda mensal mínima de R$ 7.000,00.
Ou ter uma renda mensal mínima de R$ 10.000,00 e um barco ancorado no clube;
• DIAMANTE: ter uma renda mensal mínima de R$ 15.000,00, um barco ancorado no clube e 
um patrimônio líquido de no mínimo R$ 10 milhão. Ou ser presidente da república ou governador
*/
#include<stdio.h>
#include<stdlib.h>
#define PADRAO 1
#define BRONZE 2
#define PRATA 3
#define OURO 4
#define DIAMANTE 5

int main(void){
//Declarações
	int anosPadrao=0, anosBronze=0, anosPrata=0;
	float rendaMensal;
	int categoria=0;
	int flag_barcoAncorado = 0;
	int flag_patrimonio10M = 0;
	int flag_presiOuGover = 0;
	
//Instruções
	printf("\nVoce eh presidente ou governador?\n");
	printf("Digite [0]NAO ou [1]SIM: ");
	scanf("%d",&flag_presiOuGover);

	//PERGUNTAS DO CLUBE **************************************************************************
	if(flag_presiOuGover){
		categoria = DIAMANTE;
	}else{
		printf("\nRenda Mensal: ");
		scanf("%f",&rendaMensal);

		if(rendaMensal >= 15000){
			printf("\nPossui patrimonio liquido de no minimo 10M?\n");
			printf("Digite [0]NAO ou [1]SIM: ");
			scanf("%d",&flag_patrimonio10M);
		}
		if(rendaMensal >= 10000){
			printf("\nPossui barco ancorado no clube?\n");
			printf("Digite [0]NAO ou [1]SIM: ");
			scanf("%d",&flag_barcoAncorado);
		}

		if(flag_barcoAncorado && flag_patrimonio10M){
			categoria = DIAMANTE;
		}else if(rendaMensal >= 10000 && flag_barcoAncorado){
			categoria = OURO;
		}else if(rendaMensal >= 7000){
			printf("\nQuantos anos como socio na Categoria Prata: ");
			scanf("%d",&anosPrata);
		}
		
		printf("\n\n111: %d\n\n",categoria);
		
		if(anosPrata >= 20){
			categoria = OURO;
		}else if(rendaMensal >= 5000){
			categoria = PRATA;
		}else{
			printf("\nQuantos anos como socio na Categoria Bronze: ");
			scanf("%d",&anosBronze);
		}

		printf("\n\n222: %d\n\n",categoria);

		if(!categoria){
			if(anosBronze >= 5){
				categoria = PRATA;
			}else if(rendaMensal >= 3000){
				categoria = BRONZE;
			}else{
				printf("\nQuantos anos como socio na Categoria Padrao: ");
				scanf("%d",&anosPadrao);
			}
		}

		printf("\n\n333: %d\n\n",categoria);

		if(!categoria){
			if(anosPadrao >= 10){
				categoria = BRONZE;
			}else if(rendaMensal < 3000 && anosPadrao < 10){
				categoria = PADRAO;
			}
		}	
		
		printf("\n\n444: %d\n\n",categoria);

		/*
		if(
			!flag_barcoAncorado //REFUTA CONDIÇÃO DIAMANTE 2 & OURO 2
			&&
			(
				(rendaMensal < 15000 || !flag_patrimonio10M)
				&&
				(rendaMensal > 7000 && rendaMensal < 10000)
				
				//REFUTA CONDIÇÃO DIAMANTE 2
				//REFUTA CONDIÇÃO OURO 2 E VALOR 7000 DA CONDIÇÃO OURO 1
				//RESTANDO APENAS A PERGUNTA DE OURO 1
				
			)
		){
			printf("\nQuantos anos como socio na Categoria Prata: ");
			scanf("%d",&anosPrata);
		}
		
		if(rendaMensal < 5000){ //REFUTA CONDIÇÃO PRATA 2
			printf("\nQuantos anos como socio na Categoria Bronze: "); //-> RESTANDO APENAS A PERGUNTA DA PRATA 1
			scanf("%d",&anosBronze);
		}
		if((rendaMensal < 3000) && (anosBronze < 5)){ //REFUTA CONDIÇÃO BRONZE 2 & REFUTA CONDIÇÃO PRATA 1
			printf("\nQuantos anos como socio na Categoria Padrao: "); //-> RESTANDO APENAS A PERGUNTA DE BRONZE 1
			scanf("%d",&anosPadrao);
		}
		*/
	}
	
	//CATEGORIAS **********************************************************************************
	/*
	if(
		((rendaMensal >= 15000) && flag_barcoAncorado && flag_patrimonio10M) ||
		flag_presiOuGover
	)
		categoria = DIAMANTE;
	else if(
			((anosPrata>=20) && (rendaMensal >= 7000)) ||
			((rendaMensal >= 10000) && flag_barcoAncorado)
		){
		categoria = OURO;
	}else if((anosBronze>=5) || (rendaMensal >= 5000)){
		categoria = PRATA;
	}else if((anosPadrao>=10) || (rendaMensal >= 3000)){
			categoria = BRONZE;
	}else if((anosPadrao<10) && (rendaMensal < 3000) && !flag_presiOuGover){
		categoria = PADRAO;
	}
	*/
	switch(categoria){
		case PADRAO:
			printf("\n\nCategoria: PADRAO\n\n");
		break;
		case BRONZE:
			printf("\n\nCategoria: BRONZE\n\n");
		break;
		case PRATA:
			printf("\n\nCategoria: PRATA\n\n");
		break;
		case OURO:
			printf("\n\nCategoria: OURO\n\n");
		break;
		case DIAMANTE:
			printf("\n\nCategoria: DIAMANTE\n\n");
		break;
	}
	
	return 0;
}

