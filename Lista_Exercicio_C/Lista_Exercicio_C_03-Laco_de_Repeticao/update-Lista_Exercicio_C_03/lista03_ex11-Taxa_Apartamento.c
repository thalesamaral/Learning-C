//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "08/12/2021"
/*	Objetivo:
Um prédio troca o síndico e este reajusta o valor do condomínio dos apartamentos o que 
gera grande confusão entre os moradores. Para diminuir a confusão o síndico resolve 
instalar um computador na portaria onde os moradores irão digitar o número de seu 
apartamento e saber o valor da taxa de condomínio. Você deve escrever o programa em C 
que fará tal função seguindo a regra:
	o Cada andar tem 4 apartamentos, sendo dois com 3 quartos e 2 com 4 quartos. O 
	síndico resolveu cobrar uma taxa superior nos apartamentos de 4 quartos. Assim, os 
	apartamentos de 3 quartos pagarão R$ 200,00 e os de 4 quartos R$ 250,00. Os 
	apartamentos de 4 quartos são os com números pares e os de 3 quartos com números 
	ímpares;
	o Por ser o elevador o maior custo dentre as despesas do condomínio o síndico 
	resolveu cobrar uma taxa superior dos moradores de andares mais altos. Assim, a 
	cada 3 andares será cobrado R$ 10,00. Por exemplo, os moradores do 1, 2 e 3 andar 
	pagam R$ 10,00 a mais no condomínio, os moradores do 4, 5 e 6 pagam R$ 20,00, 
	os do 7, 8, 9 pagam R$ 30,00 e assim por diante. O número do apartamento é formado 
	pelo andar e número do apartamento propriamente dito. Por exemplo, o apartamento 
	0101 é o apartamento 1 do primeiro andar, o apartamento 0103 é o apartamento 3 do 
	primeiro andar, o apartamento 1104 é o apartamento 4 do décimo primeiro andar e 
	assim por diante.
Seu programa em C deve receber o número do apartamento e apresentar o valor da 
taxa de condomínio.
*/
#include<stdio.h>
#include<stdlib.h>
#define TAM

int main(void){
//Declarações
	int num, i;
	float taxa, andar, apart;
	
//Instruções
	printf("=============================================\n");
	printf("    Digite o n�mero do seu apartamento\n");
	printf("Exemplo -> 0101: apartamento 01 do 01 andar.\n");
	printf("Cada andar tem 4 apartamentos Ex: 0101 - 0104\n");
	printf("=============================================\n");
	
	do{
		printf("Digite o n�mero do seu apartamento: ");
		scanf("%d",&num);
	}while((num <= 100) || (num % 100 > 4)); //ENQUANTO: num menor que 100 OU resto for maior que 4
	
	if((num % 2) != 0)
		taxa = 200;
	else if((num % 2) == 0)
		taxa = 250;
	
	apart = (num % 100);
	
	printf("=============================================\n");
	printf("Apartamentos pares com 4 quartos R$250,00\n");
	printf("Apartamentos �mpares com 3 quartos R$200,00\n");
	printf("=============================================\n");
	printf("------------- APARTAMENTO: %.0f ----------------\n",apart);
	printf("------------- TAXA ATUAL R$%.1f ------------\n",taxa);
	
	andar = (num/100) - (num%100)/10; //Exemplo num{803}: (num/100){8,03} - {0,3}(10/ {3}(num%100))
		
	for(i=1; i<=andar; i=i+3){
		taxa += 10;
		//printf("Taxa: %.1f\n",taxa);
	}
	
	printf("=============================================\n");
	printf("Ser� adicionado R$10,00 a cada 3 andares \n");
	printf("Exemplo: andares 1, 2, 3 recebem R$10,00 \n");
	printf("Assim em diante: 4, 5, 6 recebem R$20,00... \n");
	printf("=============================================\n");
	printf("------------- ANDAR: %.0f ----------------------\n",andar);
	printf("------------- TAXA ATUAL R$%.1f ------------\n",taxa);
	
	return 0;
}

