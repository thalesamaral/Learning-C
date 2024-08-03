// Sintese
// Objetivo:
// Autor: Thales Amaral Lima
// Data: 02/03/2020
#include <stdio.h>
#include <conio.h>
#define tam 10
int main(void){
//Declarações
	int a=0,i,j,w,flag;
    int vetor[tam],iguais[tam];
//Instruções
	for(i=0;i<tam;i++){
        printf("Entre com o elemento[ %d ] : ",i+1);
        scanf("%d",&vetor[i]);
    }
    for(i=0; i<tam; i++){
        for(j=0; j<tam; j++){
            flag=0;
            if(vetor[i]==vetor[j] && i != j){
                for(w=0; w<tam; w++){
                    if(iguais[w] == vetor[j])/* se o numero já estiver nesse vetor de iguais */
                        flag=1;
                }
                if(flag==0){
                    iguais[a]=vetor[i];/* para escrever o numero apenas uma vez */
                    a++;
                }
            }
        }
    }
    for(i=0; i<a; i++){
    	printf("%d ",iguais[i]);
    }
    getch();
    return 0;
}

