#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
setlocale(LC_ALL,"Portuguese");
	int num,c,maior=0;
	
	for(c = 1; c <= 50; c++){
		printf("Digite 50 numeros: ");
		scanf("%i",&num);
		if (num%2==0){
			if (num>maior)
				maior=num;
		}
	}
	printf("O maior numero par é: %i",maior);
}
