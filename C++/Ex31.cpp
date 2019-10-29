/*
Exercício 31
função: 
Autor: Bruno Henrique Agostinho da Silva
Data de Criação: 29/10/2019 
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char nome[50] = "";
	int c = 0;
	for(c = 0; c < 5; c++){
		printf("Insira um nome: \n");
		gets(nome);
		printf("O nome inserido foi %s \n", nome);
		fflush(stdin);
	}
}
