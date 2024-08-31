#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	char nome[100];
	char b,c[20];
	int i,j,a,f=1,g=0;

    printf("Digite O Nome e Os Sobrenomes De Uma Pessoa separados por um espaco\n");
    printf("Nome --> ");
    gets(nome);
    a = strlen(nome);
    printf("\n");
    for(i=a; i>=0; i--){
        if(nome[i]==' '){
            b = nome[i+1];
            b = toupper(b);
            c[0] = b;
            nome[i] = '.';
            for(j=i+2; j<a; j++){
                c[f] = toupper(nome[j]);
                f++;
            }
            printf("Aqui Referencia Bibliografica --> %s,",c);
            g = 1;
            break;
        }
    }
    g = 0; 
	f = 0;
    for(i=0; i<a; i++){
        if(nome[i]=='.'){
			break;
		}
        if(nome[i]==' '){
            g = 0;
            i++;
            if(nome[i+2]==' '||nome[i+2]=='.'){
                i += 2;
				g = 1;
            }
        }
        if(nome[i]==' '){g=0;i++;}
        if(g==0){
            if(nome[i+2]!=' '){
                b = nome[i];
                g = 1;
                printf(" %c.",toupper(b));
            }
        }
    }
    //printf("\n\n\n");
    //getch();
    return 0;
}
