// Síntese
// Autor: Thales Amaral Lima
// Data: 18/08/2024
/* Objetivo:
Um determinado material radioativo perde metade de sua massa a cada 50 segundos. Dada 
a massa inicial, em gramas, fazer um programa em C que calcule o tempo necessário para 
que essa massa se torne menor que 0,5 grama. O programa em C deve escrever a massa 
inicial, a massa final e o tempo calculado em horas, minutos e segundos.
*/
#include <stdio.h>

int main(void){
//Declarações
	float massaInicial, massa;
	int hora=3600, minuto=60, segundo=0, h, m, s;

//Instruções
	printf("Digite a quantidade massa em gramas: ");
	scanf("%f",&massa);
	massaInicial = massa;

	while(massa >= 0.5){
		segundo += 50;
		massa /= 2;
	}
	
	h = segundo/hora;
	m = segundo/minuto;
	while(m >= 60){
		h += 1;
		m -= 60;
	}
	s = segundo%minuto;
	//printf("\nsegundo %d - h %d - m %d - s %d\n",segundo,h,m,s);

	printf("\nMassa inicial = %g",massaInicial);
	printf("\nMassa final = %g",massa);
	printf("\nTempo de processo = %d(hor) %d(min) %d(seg)\n",h,m,s);
}

