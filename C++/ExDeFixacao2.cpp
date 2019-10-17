/*
Exercício de fixação 2
função: Crie um programa que receba um valor em Celcius calcule Fahrenheit
Autor: Bruno Henrique Agostinho da Silva
Data de Criação: 29/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float fah = 0.0, cel = 0.0;
	printf("Recebe um valor em Celcius calcule Fahrenheit \n");
	printf("Indique a temperatura em graus Celsius: ");
	scanf("%f", &cel);
	fah = (cel * 1.8) + 32;
	printf("%f graus Celsius equivale a %f grus fahrenheit. \n", cel, fah);
	return(0);
}
