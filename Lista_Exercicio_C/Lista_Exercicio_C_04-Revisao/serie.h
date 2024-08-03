// Sintese
//   objetivo "CRUD de produto"
//   autor "Thales Amaral Lima"
//   data "10/06/2020"
#ifndef SERIE_H
#define SERIE_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//*** Declaracoes de tipos *****************************************************
struct tProduto {
	int codigo;         // chave primaria 
	char descricao[30];
	float valor;
	int codFornecedor;  // chave estrangeira de Fornecedor 
	char deletado;      // *=deletado ' '=nao deletado
};

//*** Prototipos de funcoes ****************************************************
void crudProduto(FILE*, FILE*);
void gravarProduto(struct tProduto, int, FILE*);
void listarProdutos(char, FILE*, FILE*);
int consultarProduto(int, char, FILE*);
int consultarProdutoFornecedor(int, char, FILE*);
void excluirRestaurarProduto(int, char, FILE*);
struct tProduto lerProduto(int, FILE*);
void excluirFisicamenteProduto(FILE**, char[]);

#include "crud.h"
#include "fornecedor.h"

//*** CRUD de produto ***********************************************************
void crudProduto(FILE *arqProduto, FILE *arqFornecedor) {
	int opcao, codigo, pos, posFornecedor;
	struct tProduto produto;
	struct tFornecedor fornecedor;
	do {
        opcao = menuCrud("SERIES");
        switch (opcao) {
            case 1: 
                printf("\n\n*** Inclusao de Series ***\n\n");
				printf("Digite o codigo.....: ");
				scanf("%d", &produto.codigo);
				pos = consultarProduto(produto.codigo, ' ', arqProduto);
				if (pos > 0)
					printf("Codigo ja existente!\n");
				else {
					printf("Digite a descricao..: ");
					fflush(stdin);
					gets(produto.descricao);
					printf("Digite o valor......: R$ ");
					scanf("%f", &produto.valor);
	                printf("Lista de Produtoras:\n");
	                listarFornecedor(' ', arqFornecedor);
	                do {
		                printf("Codigo do Produtor: ");
						scanf("%d", &codigo);
						posFornecedor = consultarFornecedor(codigo, ' ', arqFornecedor);
						if (posFornecedor == -1)
							printf("Codigo nao encontrado!\n\n");
						else
							fornecedor = lerFornecedor(posFornecedor, arqFornecedor);
					} while (posFornecedor == -1);
	                produto.codFornecedor = fornecedor.codigo;
	            	gravarProduto(produto, -1, arqProduto);
				}
                break;
            case 2: 
                printf("\n\n*** Listagem de Series ***\n\n");
                listarProdutos(' ', arqProduto, arqFornecedor);
	            break;
            case 3: 
                printf("\n\n*** Consulta de Series ***\n\n");
                printf("Digite o codigo: ");
				scanf("%d", &codigo);
				pos = consultarProduto(codigo, ' ', arqProduto);
				if (pos > 0) {
					produto = lerProduto(pos, arqProduto);
					printf("Descricao......: %s\n",  produto.descricao);
					printf("Valor..........: R$ %.2f\n", produto.valor);
					fornecedor = lerFornecedor(consultarFornecedor(produto.codFornecedor, ' ', arqFornecedor), arqFornecedor);
					printf("Produtor.....: %s\n", fornecedor.nome);
				}
				else
					printf("Codigo nao encontrado!\n");
                break;
            case 4: 
                printf("\n\n*** Alteracao de Series ***\n\n");
                printf("Digite o codigo.....: ");
				scanf("%d", &codigo);
				pos = consultarProduto(codigo, ' ', arqProduto);
				if (pos > 0) {
					produto = lerProduto(pos, arqProduto);
					printf("Descricao...........: %s\n",  produto.descricao);
					printf("Digite a descricao..: ");
					fflush(stdin);
					gets(produto.descricao);
					printf("Valor...............: R$ %.2f\n", produto.valor);
					printf("Digite o valor......: R$ ");
					scanf("%f", &produto.valor);
					fornecedor = lerFornecedor(consultarFornecedor(produto.codFornecedor, ' ', arqFornecedor), arqFornecedor);
					printf("Produtor..........: %s\n", fornecedor.nome);
	                printf("Lista de Produtoras:\n");
	                listarFornecedor(' ', arqFornecedor);
	                do {
		                printf("Codigo do Produtor: ");
						scanf("%d", &codigo);
						posFornecedor = consultarFornecedor(codigo, ' ', arqFornecedor);
						if (posFornecedor == -1)
							printf("Codigo nao encontrado!\n\n");
						else
							fornecedor = lerFornecedor(posFornecedor, arqFornecedor);
					} while (posFornecedor == -1);
	                produto.codFornecedor = fornecedor.codigo;
                	gravarProduto(produto, pos, arqProduto);
				}
				else
					printf("Codigo nao encontrado!\n");
                break;
            case 5: 
                printf("\n\n*** Exclusao de Series ***\n\n");
                printf("Digite o codigo...: ");
				scanf("%d", &codigo);
				pos = consultarProduto(codigo, ' ', arqProduto);
				if (pos > 0)
					excluirRestaurarProduto(pos, '*', arqProduto);
				else
					printf("Codigo nao encontrado!\n");
                break;
            case 6: 
                printf("\n\n*** Restauracao de Series ***\n\n");
                listarProdutos('*', arqProduto, arqFornecedor);
                printf("Digite o codigo...: ");
				scanf("%d", &codigo);
				pos = consultarProduto(codigo, '*', arqProduto);
				if (pos > 0)
					excluirRestaurarProduto(pos, ' ', arqProduto);
				else
					printf("Codigo nao encontrado!\n");
        }
    } while (opcao != 0);
}

//*** Gravar produto ************************************************************
// reg <= 0 grava no final do arquivo
void gravarProduto(struct tProduto prod, int reg, FILE *arq) {
	if (reg <= 0) {
		prod.deletado = ' ';
		fseek(arq, 0, SEEK_END);
	}
	else
		fseek(arq, (reg-1)*sizeof(prod), SEEK_SET);
	fwrite(&prod, sizeof(prod), 1, arq);
}

//*** Listar produtos **********************************************************
void listarProdutos(char deletado, FILE *arq, FILE *arqFornecedor) {
	struct tProduto prod;
	struct tFornecedor forn;
	fseek(arq, 0, SEEK_SET);
   	printf("COD   DESCRICAO                      VALOR      PRODUTOR\n");
   	printf("----- ------------------------------ ---------- ------------------------------ \n");
    while (fread(&prod, sizeof(prod), 1, arq)) {
    	if (prod.deletado == deletado) {
			forn = lerFornecedor(consultarFornecedor(prod.codFornecedor, ' ', arqFornecedor), arqFornecedor);
    		printf("%5d %-30s %10.2f %s\n", prod.codigo, prod.descricao, prod.valor, forn.nome);
    	}
	}
}

//*** Consultar produto ********************************************************
int consultarProduto(int cod, char deletado, FILE *arq) {
	struct tProduto prod;
	int reg=0;
	fseek(arq, 0, SEEK_SET);
    while (fread(&prod, sizeof(prod), 1, arq)) {
    	reg++;
    	if ((prod.codigo == cod) && (prod.deletado == deletado))
    		return reg;
	}
	return -1;
}

//*** Consultar forecedor do produto *******************************************
int consultarProdutoFornecedor(int codFornecedor, char deletado, FILE *arq) {
	struct tProduto prod;
	fseek(arq, 0, SEEK_SET);
    while (fread(&prod, sizeof(prod), 1, arq)) {
    	if ((prod.codFornecedor == codFornecedor) && (prod.deletado == deletado))
    		return 1; // V
	}
	return 0; // F
}

//*** Ler produto **************************************************************
struct tProduto lerProduto(int reg, FILE *arq) {
	struct tProduto prod;
	fseek(arq, (reg-1)*sizeof(prod), SEEK_SET);
    fread(&prod, sizeof(prod), 1, arq);
 	return prod;
}

//*** Excluir Logicamente ou restaurar produto *********************************
void excluirRestaurarProduto(int reg, char deletado, FILE *arq) {
	struct tProduto prod;
	fseek(arq, (reg-1)*sizeof(prod), SEEK_SET);
    fread(&prod, sizeof(prod), 1, arq);
    prod.deletado = deletado;
	fseek(arq, -sizeof(prod), SEEK_CUR);
	fwrite(&prod, sizeof(prod), 1, arq);
}

//*** Excluir Fisicamente produto **********************************************
void excluirFisicamenteProduto(FILE **arq, char arquivo[]) {
	struct tProduto prod;
	FILE *arqAux = fopen("produtos.aux", "wb");
	if (arqAux == NULL)
		return;
	fseek(*arq, 0, SEEK_SET);
    while (fread(&prod, sizeof(prod), 1, *arq))
    	if (prod.deletado != '*')
			fwrite(&prod, sizeof(prod), 1, arqAux);
	fclose(*arq);
	fclose(arqAux);
	remove(arquivo);
	rename("produtos.aux", arquivo);
	*arq = abrirArquivo(arquivo);
}

#endif
//*** FIM **********************************************************************v
