/*
Exerc�cio 2
fun��o: Calcular a �rea de um tri�ngulo
Autor: Bruno Henrique Agostinho da Silva
Data de Cria��o: 28/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int bas = 0, alt = 0, a = 0;
	printf("Calcula a �rea de um tri�ngulo \n");
	printf("Insira a base do tri�ngulo: ");
	scanf("%i", &bas);
	printf("Insira a altura do tri�ngulo: ");
	scanf("%i", &alt);
	a = (bas * alt) / 2;
	printf("A �rea do tri�ngulo � %i", a);
	return(0);
}

