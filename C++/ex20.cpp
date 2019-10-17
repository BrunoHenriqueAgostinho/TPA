/*
Exercício 20
função: Apresentar o nome eo preço do lanche conforme  o número da opção digitado pelo usuário
Autor: Bruno Henrique Agostinho da Silva
Data de Criação: 16/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int esco = 0;
	printf("Digite o código do lanche (1, 2, 7 ou 15): ");
	scanf("%i", &esco);
	
	switch(esco){
			case 1:
			printf("Cachorro Quente - R$3,50 \n");
			break;
			
			case 2:
			printf("X-Salada - R$5,00 \n");
			break;
			
			case 7:
			printf("X-Burger - R$8,90 \n");
			break;
			
			case 15:
			printf("X-Tudo - 12,70 \n");
			break;
			default:
			printf("Código de lanche não existente. \n");
			break;
	}
	system("pause");
}


