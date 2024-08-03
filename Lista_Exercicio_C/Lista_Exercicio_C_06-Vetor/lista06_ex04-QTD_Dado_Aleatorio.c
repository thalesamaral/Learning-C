//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "14/12/2021"
/*	Objetivo: Lançamento de dado*/
//  Entrada.: dado quantidade de jogadas, Nºs de 1 a 6 de forma aleatoria.
//  Saída...: quantidade de ocorrências de 1 a 6.
#include<stdio.h>
#include<stdlib.h>// necessário p/ as funções rand() e srand()
#include<locale.h>
#define TAM 10

main(){
setlocale(LC_ALL,"Portuguese");
//Variaveis
	int i, dado[TAM];
	int um=0, dois=0, tres=0, quatro=0, cinco=0, seis=0;
	
//Instruções
	//printf("");
	//scanf("%",&);
	
	srand(time(NULL));
		
	for(i=0; i<TAM; i++){
		
		dado[i] = (rand() % 6) + 1; //iría começar com 0 mas adicionei +1.
		if(dado[i] == 1)
			um++;
		else
			if(dado[i] == 2)
				dois++;
			else
				if(dado[i] == 3)
					tres++;
				else
					if(dado[i] == 4)
						quatro++;
					else
						if(dado[i] == 5)
							cinco++;
						else
							seis++;
	}
	
	for(i=0; i<TAM; i++){
		printf("\n%dº valor: %d",i+1,dado[i]);
	}
	
	printf("\n\n1) %d - 2) %d - 3) %d - 4) %d - 5) %d - 6) %d",um,dois,tres,quatro,cinco,seis);
	
	return 0;
}



