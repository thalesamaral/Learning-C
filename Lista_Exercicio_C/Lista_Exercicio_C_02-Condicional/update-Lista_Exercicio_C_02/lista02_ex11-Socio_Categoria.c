//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "03/12/2021" - "05/08/2022"
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

int main(void){
//Declarações
	int anosPadrao, anosBronze, anosPrata;
	float rendaMensal;
	char resp;
	int categoria;
	int flag1 = 0;
	int flag2 = 0;
	int flag3 = 0;
	
//Instruções
	printf("Quantos anos como socio na Categoria Padrao: ");
	scanf("%d",&anosPadrao);
	printf("Quantos anos como socio na Categoria Bronze: ");
	scanf("%d",&anosBronze);
	printf("Quantos anos como socio na Categoria Prata: ");
	scanf("%d",&anosPrata);
	
	printf("\nRenda Mensal: ");
	scanf("%f",&rendaMensal);
	
	printf("\nPossui barco ancorado no clube?\n");
		verificarResposta(resp);
		if(resp == 'S')
			flag1 = 1;
	printf("\nPossui patrimonio liquido de no minimo 10M?\n");
		verificarResposta(resp);
		if(resp == 'S')
			flag2 = 1;
	printf("\nVoce eh presidente ou governador?\n");
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
			printf("\n\nCategoria: PADRAO");
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
		printf("\n[S]sim ou nao[N]: ");
		resposta = getche();
		resposta = toupper(resposta);
	}while((resposta != 'S') && (resposta != 'N'));
	
	return resposta;
}
