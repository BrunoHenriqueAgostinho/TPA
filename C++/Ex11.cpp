/*
Exercício 11
função: Ler um número e verificar se ele é positivo ou negativo.
Autor: Bruno Henrique Agostinho da Silva
Data de Criação: 01/010/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	float num = 0.0;
	printf("Lê um número e verifica se ele é positivo ou negativo \n");
	printf("Insira um número: ");
	scanf("%f", &num);
	if(num > 0){
		printf(" Positivo\n");
	}
	else if(num < 0){
		printf(" Negativo\n");
	}
	else{
		printf(" Número Neutro\n");
	}
	return(0);
}
