/*
strlen(str1).......: Retorna o tamanho da string
strcpy(str1, str2).: Copia a segunda string para a primeira
strcmp(str1, str2).: Retorna o valor da comparação das duas strings. Zero se forem iguais, maior que zero 
quando a primeira é maior que a segunda e menor que zero quando a primeira é menor que a segunda.
strcat(str1, str2).: Concatena a primeira string com a segunda
*/
#include <stdio.h>  //fgets, puts
#include <string.h> //strlen, strcpy, strcmp, strcat
#define TAM 25
#define BARRA_SIMPLES printf("--------------------------------------------------\n");

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
    //char str1[TAM];
    //char str2[TAM];
    char str1[] = "banana";
    char str2[] = "bola";
    char str3[TAM];

//Instruções
  //Limpa o Buffer
  setbuf(stdin, 0); //fflush(stdin);

  puts("Ola mundo!");
  
  //Lê a String
  BARRA_SIMPLES
  //printf("Digite um texto: ");
  //scanf("%s", str1);
  
  //Lê a String - Limpa as casas não utilizadas
  printf("Digite o texto 3: ");
  //scanf("%s", str3); //Verifica uma palavra
  ///*
  fgets(str3, 255, stdin); //Verifica + de uma palavra
  str3[strlen(str3)-1] = '\0';
  //*/
  
  //Imprime a variável na tela
  BARRA_SIMPLES
  puts("Imprime a variavel na tela"); //pula linha
  printf("str1: %s\n", str1);  //puts(str1);
  printf("str2: %s\n", str2);
  printf("str2: %s\n", str3);

  //Retorna o tamanho da string
  BARRA_SIMPLES
  puts("Retorna o tamanho da string");
  puts("strlen(str)........:");
  printf("str1: %lu\n", strlen(str1));
  printf("str2: %lu\n", strlen(str2));
  printf("str3: %lu\n", strlen(str3));

  /*
  Retorna o valor da comparação das duas strings. Zero se forem iguais,
  maior que zero quando a primeira é maior que a segunda e menor que zero quando a primeira é menor que a segunda.
  */
  BARRA_SIMPLES
  printf("Retorna o valor da comparacao das duas strings\n");
  printf("strcmp(str1, str2).: %d\n", strcmp(str1, str2));

  //Concatena a primeira string com a segunda
  BARRA_SIMPLES
  printf("Concatena a primeira string com a segunda\n");
  printf("strcat(str1, str2).:\n");
  strcat(str1, str2);
  printf("str1: %s\n",str1);

  //Copia a segunda string para a primeira
  BARRA_SIMPLES
  printf("Copia a segunda string para a primeira\n");
  printf("strcpy(str1, str3).:\n");
  strcpy(str1, str3);
  printf("str1: %s\n",str1);

  return 0;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************
