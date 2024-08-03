#include <stdio.h>
#include <stdlib.h>
#define TAM 3

//Função principal do programa
void main(){

    //Imprime na tela
    int vetor[TAM],c;

    //Passando valores para o vetor
    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;

    //Adicionando 1 para cada posição
    for(c = 0; c < TAM; c++){
        vetor[c] =  vetor[c] + 1;
    }

    //Exeibindo os valores do vetor
    printf("\nPosicao 0: %d", vetor[0] );
    printf("\nPosicao 1: %d", vetor[1] );
    printf("\nPosicao 2: %d", vetor[2] );

    //Imprimindo vetor em um laço de repetição
    for(c = 0; c < TAM; c++){
        printf("\nPosicao %d : %d", c, vetor[c] );
    }

    //Lendo 3 valores para o vetor
    for(c = 0; c < TAM; c++){
        scanf("%d", &vetor[c]);
    }

    //Imprimindo vetor em um laço de repetição
    for(c = 0; c < TAM; c++){
        printf("\nPosicao %d : %d", c, vetor[c] );
    }

    //Pausa o programa após executar
    system("pause");

}

