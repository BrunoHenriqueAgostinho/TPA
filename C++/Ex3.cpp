/*
Exercício 3
função: Calcular a área de um círculo
Autor: Bruno Henrique Agostinho de Silva
Data de Criação: 28/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

#define PI 3.1416
//declarando constante

int main(){
	setlocale(LC_ALL, "");
	float raio = 0, a = 0;
	printf("Calcula a área de um círculo \n");
	printf("Insira o raio do círculo: ");
	scanf("%f", &raio);
	a = raio * raio * PI;
	printf("A área do círculo é %f \n", a);
	system("pause");
}

