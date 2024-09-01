//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "01/09/2024"
/*	Objetivo:
8. Criptografia é um processo de codificação de dados que visa a privacidade de acesso às 
informações e o Código de César é uma das mais conhecidas e simples técnicas para isso. 
Neste método são feitas substituições onde cada letra do texto é substituída por outra abaixo 
dela um número de vezes. Por exemplo, se for código três “A” é substituído por “D”, “B” por 
“E”, “Z” por “C”, etc.
Faça um programa em C que receba um texto, criptografe com a código de César 
considerando o código 3 e apresente o texto criptografado. Exemplo: Texto = “A LIGEIRA 
RAPOSA MARROM SALTOU SOBRE O CACHORRO CANSADO”. Criptografado = “D 
OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR”.
*/
#include <stdio.h>
#include <string.h>
#define TAM 255

//Protótipo de Função
void criptografar(char[], int);

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	char texto[] = "A LIGEIRA RAPOSA MARROM SALTOU SOBRE O CACHORRO CANSADO";
	int codigo;

//Instruções
	printf("Digite um texto: ");
	//fgets(texto, TAM, stdin);
	texto[strlen(texto)-1] = '\0'; //Ignora as casas não utilizadas
	
	printf("\nCodigo para criptografia: ");
	scanf("%d",&codigo);
	
	criptografar(texto, codigo);
	printf("\nTexto criptografado: %s",texto);
	
	return 0;
}

void criptografar(char str[], int cod){
	size_t i;
	
	for(i=0; i<strlen(str); i++){
		if((str[i] >= 32) && (str[i] <= 126)){
			str[i] = (((str[i]-32)+cod) % 95) + 32;
		}
	}
}
//*** FIM DO BLOCO PRINCIPAL **********************************************

/*
A função strlen() retorna um valor do tipo size_t, que é um tipo de dado não assinado (unsigned) e representa o tamanho de um objeto em bytes. O tipo int, por outro lado, é um tipo de dado com sinal (signed).

Aqui estão algumas considerações:

Comparação de tipos diferentes: Embora você possa comparar um int com um size_t, é importante entender que size_t é um tipo não assinado, enquanto int é com sinal. Isso pode causar problemas se, por exemplo, i for negativo, pois uma comparação entre um número negativo e um tipo não assinado pode resultar em comportamento inesperado.

Segurança: Em geral, é seguro comparar int com o valor de strlen() quando você sabe que i será sempre não negativo e o valor de strlen() será pequeno o suficiente para caber em um int. No entanto, se você estiver lidando com grandes strings ou se houver a possibilidade de i se tornar negativo, é melhor usar um tipo consistente.

Boa prática: Para evitar qualquer possível problema de tipo, você pode declarar i como size_t em vez de int. Isso garantiria que tanto i quanto strlen(str) sejam do mesmo tipo:
*/
