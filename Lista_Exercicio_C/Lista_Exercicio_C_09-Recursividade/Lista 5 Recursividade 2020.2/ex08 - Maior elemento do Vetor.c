// Sintese
// Objetivo:
// Autor: Thales Amaral Lima
// Data: 29/09/2020
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define TAM 5

int procura(int[], int, int);
 
int main(){
    int i, maior=0, list[TAM];
 
    printf("Digite numeros para o vetor\n");
    for (i = 0; i<TAM; i++){
        printf("%i - ",i+1);
		scanf("%i",& list[i]);
    }
    
    maior = list[0];
    maior = procura(list, TAM-1, maior);
    printf("\nO maior numero nessa lista: %i\n", maior);
}

int procura(int list[], int fim, int maior){
	
    if (fim == 0)
        return maior;
 
    if (fim > 0){
        if (list[fim] > maior){
            maior = list[fim];
        }
        return procura(list, fim - 1, maior);
    }
}
