//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "03/12/2021" - "05/08/2022"
/*	Objetivo: receba as informações que forem necessárias para imprimir
a categoria que o sócio de um clube terá.*/
//  Entrada.: tempo em uma categoria, renda mensal.
//  Saída...: Informa a categoria.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	int anosPadrao, anosBronze, anosPrata;
	float rendaMensal;
	char resp;
	int categoria;
	int flag1 = 0;
	int flag2 = 0;
	int flag3 = 0;
	
//Instruções
	//printf("");
	//scanf("%",&);
	
	printf("Quantos anos como sócio na Categoria Padrão: ");
	scanf("%d",&anosPadrao);
	printf("Quantos anos como sócio na Categoria Bronze: ");
	scanf("%d",&anosBronze);
	printf("Quantos anos como sócio na Categoria Prata: ");
	scanf("%d",&anosPrata);
	
	printf("\nRenda Mensal: ");
	scanf("%f",&rendaMensal);
	
	printf("\nPossui barco ancorado no clube?\n");
		verificarResposta(resp);
		if(resp == 'S')
			flag1 = 1;
	printf("\nPossui patrimônio liquido de no mínimo 10M?\n");
		verificarResposta(resp);
		if(resp == 'S')
			flag2 = 1;
	printf("\nVocê é presidente ou governador?\n");
		verificarResposta(resp);
		if(resp == 'S')
			flag3 = 1;
	
	if((anosPadrao<10) && (rendaMensal < 3000) && (flag3==0))
		categoria = 1;
	else if(((rendaMensal >= 15000) && (flag1 == 1) && (flag2 == 1)) || (flag3 == 1))
		categoria = 5;
	else if((anosPadrao>=10) || ((rendaMensal >= 3000) && (rendaMensal < 5000))){
		categoria = 2;
	}else if((anosBronze>=5) || (rendaMensal >= 5000))
		categoria = 3;
	else if((anosPrata>20) && (rendaMensal >= 7000))
		categoria = 4;
	else if((rendaMensal >= 10000) && (flag1 == 1))
		categoria = 4;
		
	switch(categoria){
		case 1:
			printf("\n\nCategoria: PADRÃO");
		break;
		case 2:
			printf("\n\nCategoria: BRONZE");
		break;
		case 3:
			printf("\n\nCategoria: PRATA");
		break;
		case 4:
			printf("\n\nCategoria: OURO");
		break;
		case 5:
			printf("\n\nCategoria: DIAMANTE");
		break;
	}
	
	return 0;
}

int verificarResposta(int resposta){
	
	do{
		printf("\n[S]sim ou não[N]: ");
		resposta = getche();
		resposta = toupper(resposta);
	}while((resposta != 'S') && (resposta != 'N'));
	
	return resposta;
}
