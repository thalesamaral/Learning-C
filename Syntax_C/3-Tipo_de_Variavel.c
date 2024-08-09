#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void){

    //Definindo Vari�veis
    int varINT;
    float varFLOAT;
    char varCHAR;
    bool varBOOL;

    //Passando Valores
    varINT = 1;
    varFLOAT = 1.100;
    varCHAR = 'a';
    varBOOL = true; //true = 1, false = 0

    //Escrevendo na Tela
    printf("\n O valor de a = %d |int", varINT);
    printf("\n O valor de b = %f |float f", varFLOAT);
    printf("\n O valor de b = %g |float g", varFLOAT);
    printf("\n O valor de c = %c |char", varCHAR);
    printf("\n O valor de d = %d |bool true\n", varBOOL);

    //Lendo Valores
    printf("\nint..: ");
    scanf("%d", &varINT);
    printf("float: ");
    scanf("%f", &varFLOAT);
    printf("char..: ");
    fflush(stdin); //Limpa o Buffer setbuf(stdin, 0);
    setbuf(stdin, 0);
    scanf("%c", &varCHAR);
    printf("bool.: = false");
    varBOOL = false;

    //Escrevendo na Tela
    printf("\n\n O valor de a = %d |int", varINT);
    printf("\n O valor de b = %f |float f", varFLOAT);
    printf("\n O valor de b = %g |float g", varFLOAT);
    printf("\n O valor de c = %c |char", varCHAR);
    printf("\n O valor de d = %d |bool false\n", varBOOL);

    return 0;
}
