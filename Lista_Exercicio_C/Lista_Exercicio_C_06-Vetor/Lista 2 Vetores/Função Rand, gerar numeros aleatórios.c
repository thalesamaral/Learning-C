// Sintese
// Objetivo:
// Autor: Thales Amaral Lima
// Data: 0/0/2020
#include <stdio.h>
#include <conio.h>
int main(void){
//Declara��es
	int c;
//Instru��es
  printf("Gerando 10 valores aleatorios:\n\n");
  
  for (c=0;c<100;c++){
    /* gerando valores aleat�rios entre zero e 100 */
    printf("%d ", rand() % 6);
  }
  getch();
  return 0;
}

