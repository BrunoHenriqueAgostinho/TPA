/*
Exercício 2
função: Calcular a área de um triângulo
Autor: Bruno Henrique Agostinho da Silva
Data de Criação: 28/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	int bas = 0, alt = 0, a = 0;
	printf("Calcula a área de um triângulo \n");
	printf("Insira a base do triângulo: ");
	scanf("%i", &bas);
	printf("Insira a altura do triângulo: ");
	scanf("%i", &alt);
	a = (bas * alt) / 2;
	printf("A área do triângulo é %i", a);
	return(0);
}

