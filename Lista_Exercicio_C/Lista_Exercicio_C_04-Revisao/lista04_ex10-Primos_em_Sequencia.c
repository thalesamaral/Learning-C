// Sintese
// Objetivo:
// Autor: Thales Amaral Lima
// Data: 0/0/2020
#include <stdio.h>
#include <conio.h>
main(){
//Declara��es
	int num, cont, c2,c1,aux=0;
//Instru��es
	
	do{
		printf("Digite um numero\n");
		scanf("%i",&num);
		if(num<0){
			system("cls");
			printf("Numero invalido\n");
		}
	}while(num<0);
	
	for(c1=0;c1<=num;c1++){
		c1++;
		for(c2=num;c2>=0;c2--){
			c2--;
			if(c2%c1==0){
				if(c1!=aux){
					printf("%i\n",c1);
					aux=c1;
				}
			}
		}
	}
}	

