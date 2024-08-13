// Síntese
// Autor: Thales Amaral Lima
// Data: 0/0/2024
/* Objetivo: */
#include <stdio.h>

int main(void){
//Declarações
    int i = 0;
	float s = 0;
    
//Instruções
    for (i=1;i<=50;i++){
        s += (2*i-1)/i; 
        printf(" %d/%d\n",(2*i-1),i);    
    }
    printf("\n\n Somatorio: %.3f\n\n",s);
    system("pause");
    return 0;
}
