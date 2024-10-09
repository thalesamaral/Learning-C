//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "03/08/2024"
/*  Objetivo:
Faça um programa em C que receba o número de eleitores de um município, o número de 
votos em branco, nulos e válidos de uma eleição, calcule e imprima o percentual que cada 
um representa em relação ao número de eleitores do município.
*/
#include<stdio.h>
#include<stdlib.h>

int main(void){
//Declarações
    int qtdEleitor;
    float qtdVotoValido=0;
    float qtdVotoBranco=0;
    float qtdVotoNulo=0;
    
//Instruções
    printf("Quantidade da eleitores: ");
    scanf("%d",&qtdEleitor);
    printf("Quantidade de votos valido: ");
    scanf("%f",&qtdVotoValido);
    printf("Quantidade de votos em branco: ");
    scanf("%f",&qtdVotoBranco);
    printf("Quantidade de votos nulo: ");
    scanf("%f",&qtdVotoNulo);
    
    printf("\nPercentual de votos por eleitores\n");
    printf("Votos Validos: %.2f%%\n",(qtdVotoValido*100/qtdEleitor));
    printf("Votos Brancos: %.2f%%\n",(qtdVotoBranco*100/qtdEleitor));
    printf("Votos Nulos: %.2f%%\n",(qtdVotoNulo*100/qtdEleitor));
    
    return 0;
}
