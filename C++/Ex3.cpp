/*
Exerc�cio 3
fun��o: Calcular a �rea de um c�rculo
Autor: Bruno Henrique Agostinho de Silva
Data de Cria��o: 28/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

#define PI 3.1416
//declarando constante

int main(){
	setlocale(LC_ALL, "");
	float raio = 0, a = 0;
	printf("Calcula a �rea de um c�rculo \n");
	printf("Insira o raio do c�rculo: ");
	scanf("%f", &raio);
	a = raio * raio * PI;
	printf("A �rea do c�rculo � %f \n", a);
	system("pause");
}

