/*
Exercício de fixação 7
função: Sabendo que para iluminar corretamente um cômodo é necessário para cada métro quadrado 18W de potência, faça um algoritmo que leia
duas dimensões do cômodo, calcule e mostre sua área e a potência de iluminação que deverá ser utilizada. 
Autor: Bruno Henrique Agostinho da Silva
Data de Criação: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

#define PI 3.1416

int main() {
	setlocale(LC_ALL, "Portuguese");
	float comp = 0.0, larg = 0.0, a = 0.0, poten = 0.0;

	printf("Calcula a potência necessária para iluminar um  cômodo corretamente \n");
	printf("Insira o comprimento do cômodo(em metros): ");
	scanf("%f", &comp);
	printf("Insira a largura do cômodo(em metros): ");
	scanf("%f", &larg);
	a = comp * larg;
	poten = a * 18;
	printf("A área do cômodo é %f M² e serão necessários %f W de potência para iluminar corretamente o cômodo. \n", a, poten);
	return(0);
}
