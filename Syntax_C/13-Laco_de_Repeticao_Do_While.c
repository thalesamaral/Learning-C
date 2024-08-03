#include <stdio.h>
#include <stdlib.h>

//Fun��o principal do programa
void main(){

    //Definindo Vari�veis
    int a = 0;

    //Primeiro confere a condi��o, depois repete o bloco
    while(a < 10){
    	
		//Incremento
        a++;     //a = a + 1;
		
        //Imprimindo 'a' na tela
        printf("\n%d", a);
    }

    //Alterando o valor de 'a'
    a = 20;

    //Primeiro executa uma vez, depois confere a condi��o
    do{
    	
		//Incremento
        a++;     //a = a + 1;
        
        //Imprimindo 'a' na tela
        printf("\n%d", a); //a == 20 + 1 == 21
        
    }while(a < 10);
}

