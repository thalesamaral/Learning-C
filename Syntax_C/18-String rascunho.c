#include <stdio.h>
#include <stdlib.h>
#include <string.h>//gets, puts, strlen, strcpy, strcmp, strcat.
/*strlen(str1).......: Retorna o tamanho da string
  strcpy(str1, str2).: Copia a segunda string para a primeira
  strcmp(str1, str2).: Retorna o valor da comparação das duas strings. Zero se forem iguais, maior que zero 
  	quando a primeira é maior que a segunda e menor que zero quando a primeira é menor que a segunda.
  strcat(str1, str2).: Concatena a primeira string com a segunda*/
#define TAM 20
main(){
//Variaveis
	char nome[TAM];
	char letra;
	
//Instruções
	//printf("");
	//scanf("%",&);
	
	printf("Digite seu nome: ");
	gets(nome);//scanf("%s", nome);
	
	nome[0] = nome[0] + 1;//se na pos 0 for a letra A, +1 vira B.
	
	if(nome[3] == '\0')
		printf("--> %c = %d\n",nome[0], nome[0]);
	else
		printf("Maior que 3 letras\n");
	
	//strcpy(nome "chico");
	
	if (strcmp(nome, "thales")==0)
		printf("%s = %d\n",nome, strlen(nome));
	else
		printf("\nNao thales");
		
	//strcat(nome, " amaral");
	//puts(nome);
		
	printf("\nDigite uma letra: ");
	scanf("%c",&letra);//letra = getchar();
	printf("\nLetra %c = %d",letra,letra);//putchar(letra);
		
	return 0;
}



