#include <stdio.h>
#include <stdlib.h>
#include <string.h>//gets, puts, strlen, strcpy, strcmp, strcat.
/*strlen(str1).......: Retorna o tamanho da string
  strcpy(str1, str2).: Copia a segunda string para a primeira
  strcmp(str1, str2).: Retorna o valor da comparação das duas strings. Zero se forem iguais, maior que zero 
  	quando a primeira é maior que a segunda e menor que zero quando a primeira é menor que a segunda.
  strcat(str1, str2).: Concatena a primeira string com a segunda*/

//Função principal do programa
void main(){

    //Variáveis
    char palavra[10];

    //Instrução
    printf("Digite uma palavra: "); //puts("Digite uma palavra: ");

    //Limpa o Buffer
    setbuf(stdin, 0); //fflush(stdin);

    //Lê a String
    fgets(palavra, 255, stdin);//gets(palavra); //scanf("%s", palavra);
    
    //Imprime a variável na tela
    printf("%s", palavra);//puts(palavra);

    //Limpa as casas não utilizadas
    palavra[strlen(palavra)-1] = '\0';//strlen(palavra);

    //Imprime na tela
    printf("%s", palavra);
    

    //Pausa o programa após executar
    system("pause");

}

