// Sintese
// Objetivo:
// Autor: Thales Amaral Lima
// Data: 29/09/2020
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int buscaSeq(char *, char)

int main(void){
//Declarações
	
//Instruções



}

int buscaSeq(char * v, char ele) {
	int interna(char * vet, char e, int m, int n) {
		int esquerda(char * vet, char e, int m, int i) {
			if(vet[i] == e)	return i;
			if(i == m - 1 && vet[i] != e)return -1;
			return esquerda(vet, e, m, i + 1);
		}
		int direita(char * vet, char e, int m, int i, int n) {
			if(vet[m + i] == e)	return m + i;
			if(m + i == n && vet[m + i] != e) return -1;
			return direita(vet, e, m, i + 1, n);
		}
		int i, esq, dir;
		if(vet[m] == e) {
			if(n == 1 || n == 2) return 0;
			i = 0;
			esq = esquerda(vet, e, m, i);
			if(esq == -1) return m;
			return esq;
		}
		i = 0;
		if(n == 1)	return -1;
		if(n == 2) return direita(vet, e, m, i, n);
		esq = esquerda(vet, e, m, i);
		i = 0;
		dir = direita(vet, e, m, i, n);
		if(esq == -1 && dir == -1) return -1;
		if(esq == -1 && dir != -1) return dir;
		if(dir == -1 && esq != -1) return esq;
		if(esq < dir) return esq;
		return dir;
	}

	int tam = strlen(v);
	int meio;
	if(tam == 1) {
		meio = 0;
	}
	if(tam >= 2) {
		if(tam % 2 == 0) meio = tam / 2 - 1;
		else meio = tam / 2;
	}
	return interna(v, ele, meio, tam);
}
