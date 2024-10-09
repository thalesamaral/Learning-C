//  Síntese
//  Nome....: "Thales Amaral Lima"
//  Data....: "03/08/2024"
/*  Objetivo:
Faça um programa em C que leia três notas de um aluno, calcule e imprima a média do aluno.
Utilize média ponderada com os pesos 2, 3 e 5.
*/
#include<stdio.h>
#include<stdlib.h>

int main(void){
//Declarações
    float nota1, nota2, nota3;
    float media=0;
    
//Instruções

    printf("Digite a Nota 1 do aluno: ");
    scanf("%f",&nota1);
    printf("Digite a Nota 2 do aluno: ");
    scanf("%f",&nota2);
    printf("Digite a Nota 3 do aluno: ");
    scanf("%f",&nota3);

    nota1 *= 2;
    nota2 *= 3;
    nota3 *= 5;

    printf("\nNota 1 ponderada por 2: %.1f\n\n", nota1);
    printf("Nota 2 ponderada por 3: %.1f\n\n", nota2);
    printf("Nota 3 ponderada por 5: %.1f\n\n", nota3);
    
    media = (nota1 + nota2 + nota3);
    
    printf("Media %.1f\n",media/10);
    return 0;
}
