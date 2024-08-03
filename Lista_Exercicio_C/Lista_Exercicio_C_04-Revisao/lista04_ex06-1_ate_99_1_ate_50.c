// Sintese
// Objetivo:
// Autor: Thales Amaral Lima
// Data: 0/0/2020
#include <stdio.h>
#include <conio.h>
int main(){
    int i = 0;
	float s = 0;
	
    for (i=1;i<=50;i++){
        s += (2*i-1)/i; 
        printf(" %d/%d\n",(2*i-1),i);    
    }
    printf("\n\n Somatorio: %.3f\n\n",s);
    system("pause");
    return 0;
    }
