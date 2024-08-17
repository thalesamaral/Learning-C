// Síntese
// Autor: Thales Amaral Lima
// Data: 17/08/2024
/* Objetivo:
Crie um programa em C para ler 50 números e ao final informar quantos números estão no 
intervalo entre 10 (inclusive) e 100 (inclusive). Também, encontre qual o maior número par.
*/
#include <stdio.h>
#include<stdlib.h>// necessário p/ as funções rand() e srand()
#include<time.h>// necessário p/ função time()
#define TAM 50

int main(void){
//Declarações
	int i, num, quant=0, maior=0;

//Instruções
	//inicia o gerador de números pseudo-aleatórios usado pela função rand()
	srand(time(NULL));

	printf("Digite 50 numeros!\n\n");
	for(i=1; i<=TAM; i++){
		printf("Numero %d: ",i);
		//scanf("%d",&num);
		
		/* gerando valores aleatórios entre 0 e 100 */
		num = rand() % 100;
		printf("%d\n",num);

		if(num>=10 && num <= 100){
			quant ++;
		}

		if(num%2 == 0){
			if(num>maior){
				maior=num;
			}
		}
	}
	printf("\n Quantidade de numeros entre 10 e 100: %d\n",quant);
	printf(" Maior numero par: %d\n",maior);
}

