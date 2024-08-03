#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
setlocale(LC_ALL,"Portuguese");
//Declarações
	char sexo;
	float alt, pesoIdeal;
//Instruções
	printf("Letra inicial do sexo(masculino/feminino)\n");
	scanf("%c",&sexo);
	sexo = toupper(sexo);
	sexo =='M' ? printf("Masculino.\n"):	
	sexo =='F' ? printf("Feminino.\n") : printf("Invalido.\n");
	
	printf("Altura: \n");
		scanf("%f",&alt);
		
	if (sexo =='M'){
		pesoIdeal = (72.7 * alt)-58;
		printf("O peso ideal eh %f",pesoIdeal);
	}else{
		pesoIdeal = (62.1 * alt)-44.7;
		printf("O peso ideal eh %f",pesoIdeal);
	}
}
