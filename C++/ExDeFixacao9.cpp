/*
função: Crie  um algoritmo que receba valores em segundos e exia em horas minutos e segundos.
Autor: Bruno Henrique Agostinho da Silva
Data de Criação: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

#define PI 3.1416

int main() {
	setlocale(LC_ALL, "");
	int  totalS = 0, totalMin = 0, totalH = 0, finalS = 0, finalMin = 0;

	printf("Transforma um total de segundos em horas, minutos e segundos \n");
	printf("Digite o total de segundos: ");
	scanf("%i", &totalS);
	totalMin = totalS / 60;
	finalS = totalS - (totalMin * 60);
	totalH = totalMin / 60;
	finalMin = totalMin - (totalH * 60);
	printf("%i segundos equivalem a: \n %i h %i min %i s \n", totalS, totalH, finalMin, finalS);
	return(0);
}
