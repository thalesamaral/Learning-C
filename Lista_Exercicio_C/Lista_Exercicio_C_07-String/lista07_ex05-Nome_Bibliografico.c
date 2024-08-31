//  Sintese
//  Nome....: "Thales Amaral Lima"
//  Data....: "31/08/2024"
/*	Objetivo:
5. Faça um programa em C que receba um nome completo do usuário e apresente este nome 
no formato para referencial bibliográfico (Sobrenome + virgula + iniciais do nome + ponto) 
as iniciais deste nome. Exemplo: José Pereira Silva = Silva, J. P.
*/
#include <stdio.h>
#include <string.h>
#define TAM 55

//*** BLOCO PRINCIPAL *****************************************************
int main(void){
//Declarações
	char texto[] = "Thales Amaral Lima", txtFinal[TAM];
	int i, j, posUltimoNome, tamanhoTexto, qtdPalavra=0;

//Instruções
	printf("Digite Nome completo: ");
	//fgets(texto, TAM, stdin);
	//texto[tamanhoTexto-1] = '\0'; //Ignora as casas não utilizadas
	puts(texto);
	tamanhoTexto = strlen(texto);
	//printf("tamanhoTexto %d\n",tamanhoTexto);

	// #Quantidade de palavras
	for(i=0; i<tamanhoTexto; i++){
		if((texto[i] == ' ') && (texto[i+1] != '\0')){
			qtdPalavra++;
		}else if(texto[i+1] == '\0'){
			qtdPalavra++;
		}
	}
	//printf("\nQuantidade de palavras: %d\n",qtdPalavra);
	
	for(i=tamanhoTexto; i>=0; i--){
		if(texto[i] == ' '){
			j=0;
			posUltimoNome = i+1;
			for(i += 1; i < tamanhoTexto; i++){
				txtFinal[j++] = texto[i];
			}
			txtFinal[j++] = ',';
			txtFinal[j++] = ' ';
			break;
		}
	}
	
	switch(qtdPalavra){
	case 1:
		puts(texto);
	break;
	case 2:
		txtFinal[j++] = texto[0];
		txtFinal[j++] = '.';
		txtFinal[j++] = ' ';
	break;
	default:
		txtFinal[j++] = texto[0];
		txtFinal[j++] = '.';
		txtFinal[j++] = ' ';
		for(i=0; i<tamanhoTexto; i++){
			if(texto[i] == ' ' && i+1 != posUltimoNome){
				txtFinal[j++] = texto[i+1];
				txtFinal[j++] = '.';
				txtFinal[j++] = ' ';
			}
		}
	break;
	}

	txtFinal[j-1] = '\0'; //Ignora as casas não utilizadas

	printf("\nReferencia do Nome completo: ");
	printf("%s\n",txtFinal);
	//printf("\ntxtFinal %d\n",strlen(txtFinal));
	
	return 0;
}
//*** FIM DO BLOCO PRINCIPAL **********************************************
