/*
Exercício de fixação 4
função: Crie um algoritmo que receba 4 notas e 4 pesos e exiba a média ponderada desses valores
Autor: Bruno Henrique Agostinho da Silva
Data de Criação: 29/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	float n1 = 0.0, n2 = 0.0, n3 = 0.0, n4 = 0.0, p1 = 0.0, p2 = 0.0, p3 = 0.0, p4 = 0.0, media = 0.0;
	printf("Recebe 4 notas e 4 pesos e exibe a média ponderada desses valores \n");
	printf("Insira o valor da primeira nota: ");
	scanf("%f", &n1);
	printf("Insira o peso da primeira nota: ");
	scanf("%f", &p1);
	printf("Insira o valor da segunda nota: ");
	scanf("%f", &n2);
	printf("Insira o peso da segunda nota: ");
	scanf("%f", &p2);
	printf("Insira o valor da terceira nota: ");
	scanf("%f", &n3);
	printf("Insira o peso da terceira nota: ");
	scanf("%f", &p3);
	printf("Insira o valor da quarta nota: ");
	scanf("%f", &n4);
	printf("Insira o peso da quarta nota: ");
	scanf("%f", &p4);
	media = (n1 * p1 + n2 * p2 + n3 * p3 + n4 * p4) / (p1 + p2 + p3 + p4);
	printf("A média ponderada é %f", media);
	return(0);
}
