#include <stdio.h>
#include <stdlib.h>

//Fun��o principal do programa
void main(){

    //Definir Vari�veis
    int c;

    //Tabuada do 5
    for(c = 1; c <= 10; c++){
        printf("\n 5 X %d = %d",c, 5 * c);
    }

    //Contando de 2 em 2
    for(c = 0; c <= 10; c += 2){
        printf("\n%d",c);
    }

    //Contagem regressiva
    for(c = 10; c > 0; c--){
        printf("\n%d", c);
    }

    //Pausa o programa ap�s executar
    system("pause");

}

