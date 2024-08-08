#include <stdio.h>
#include <stdlib.h>
#include <string.h>//gets, puts, strlen, strcpy, strcmp, strcat.
/*strlen(str1).......: Retorna o tamanho da string
  strcpy(str1, str2).: Copia a segunda string para a primeira
  strcmp(str1, str2).: Retorna o valor da compara��o das duas strings. Zero se forem iguais, maior que zero 
  	quando a primeira � maior que a segunda e menor que zero quando a primeira � menor que a segunda.
  strcat(str1, str2).: Concatena a primeira string com a segunda*/

//Fun��o principal do programa
void main(){

    //Vari�veis
    char palavra[10];

    //Instru��o
    printf("Digite uma palavra: "); //puts("Digite uma palavra: ");

    //Limpa o Buffer
    setbuf(stdin, 0); //fflush(stdin);

    //L� a String
    fgets(palavra, 255, stdin);//gets(palavra); //scanf("%s", palavra);
    
    //Imprime a vari�vel na tela
    printf("%s", palavra);//puts(palavra);

    //Limpa as casas n�o utilizadas
    palavra[strlen(palavra)-1] = '\0';//strlen(palavra);

    //Imprime na tela
    printf("%s", palavra);
    

    //Pausa o programa ap�s executar
    system("pause");

}

