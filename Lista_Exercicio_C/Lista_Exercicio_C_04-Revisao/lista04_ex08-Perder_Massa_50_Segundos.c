// Sintese
// Objetivo:
// Autor: Thales Amaral Lima
// Data: 0/0/2020
#include <stdio.h>
#include <conio.h>
int main(void){
//Declarações
	float massa,grama;
	int hora=3600,minuto=60,segundo=0,h,m,s;

//Instruções
	printf("Digite a quantidade massa em gramas: ");
	scanf("%f",&grama);
	massa=grama;
	
	while(grama>=0.5){
		segundo+=50;
		grama/=2;
	}
	
	h=segundo/hora;
	m=segundo/minuto;
	while(m>=60){
		h+=1;
		m-=60;
	}
	s=segundo%minuto;
	
	printf("\nMassa inicial = %.0f",massa);
	printf("\nMassa final = %f",grama);
	printf("\nTempo de processo = %i(hor) %i(min) %i(seg)",h,m,s);
}

