#include <stdio.h>
#include <stdlib.h>

//Função principal do programa
void main(){

    //Definindo Variáveis
    int opcao;

    //Confere e valida a opcao
    while(opcao < 1 || opcao > 5){

         //Interface de Menu
        printf("Escolha uma opcao:\n");
        printf("1-Cadeira\n");
        printf("2-Mesa de computador\n");
        printf("3-Estante de livros\n");
        printf("4-Mesa de impressora \n");
        printf("5-Estante de CD\n");

        //Lendo a opcao
        scanf("%d", &opcao);

        //Resultado de acordo com a opcao escolhida
        switch(opcao){
             case 1:
                printf("Opcao 1 foi escolhida\n");
                break;
             case 2:
                printf("Opcao 2 foi escolhida\n");
                break;
             case 3:
                printf("Opcao 3 foi escolhida\n");
                break;
            default:
                printf("Opcao Invalida\n");
                break;
        }
    }

    //Pausa o programa após executar
    system("pause");

}

