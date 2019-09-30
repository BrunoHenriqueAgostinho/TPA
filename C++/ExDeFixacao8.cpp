/*
função: Crie um algoritmo que receba um determindo valor em horas, minutos e segundos e exiba o valor em segundos
Autor: Bruno Henrique Agostinho da Silva
Data de Criação: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

#define PI 3.1416

int main() {
	setlocale(LC_ALL, "");
	int h = 0, min = 0, s = 0, totS = 0;

	printf("Exibe em segundo valores de horas, minutos e sugundos \n");
	printf("Horas: ");
	scanf("%i", &h);
	printf("Minutos: ");
	scanf("%i", &min);
	printf("Segundos: ");
	scanf("%i", &s);
	totS = (h * 3600) + (min * 60) + s;
	printf("O total de segundos é %i \n", totS);
	return(0);
}
