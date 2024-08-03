//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "30/11/2021"
/*	Objetivo:  receba as dimens�es de um ret�ngulo (base e altura),
calcule e imprima a �rea deste ret�ngulo.
*/
#include<stdio.h>
#include<stdlib.h>

int main(void){
//Variaveis
	int base, altura;
	
//Instru��es
	printf("Digite a base do retangulo: ");
	scanf("%d",&base);
	
	printf("Digite a altura do retangulo: ");
	scanf("%d",&altura);
	
	printf("A area do retangulo: %d\n\n", base*altura);
	
	//BON�S: BORDA DO RET�NGULO
	for(int i=1; i<=altura; i++){
		for(int j=1; j<=base; j++){
			if(i == 1){
				if(j == 1){
					printf("%c",201); // Canto superior esquerdo
				}else if(j == base){
					printf("%c",187); // Canto superior direito
				}else{
					printf("%c",205); // Linha superior
				}
			}else if(i == altura){
				if(j == 1){
					printf("%c",200); // Canto inferior esquerdo
				}else if(j == base){
					printf("%c",188); // Canto inferior direito
				}else{
					printf("%c",205); // Linha inferior
				}
			}else{
				if(j == 1 || j == base){
					printf("%c",186); // Linhas verticais
				}else{
					printf(" "); // Espa�o interno
				}
			}
		}
		printf("\n");
	}
	
	return 0;
}

