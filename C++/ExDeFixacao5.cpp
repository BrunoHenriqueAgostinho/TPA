/*
Exerc�cio de fixa��o 5
fun��o: Crie um algoritmo que receba a altura e  o nome de duas pessoas e exiba a m�dia entre elas
Autor: Bruno Henrique Agostinho da Silva
Data de Cria��o: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	float alt1 = 0.0, alt2 = 0.0, media = 0.0;
	char nome1[50] = "", nome2[50] = "";
	printf("Recebe a altura e  o nome de duas pessoas e exibe a m�dia entre elas \n");
	printf("Insira o nome da primera pessoa: ");
	scanf("%s", &nome1);
	printf("Insira a altura da primeira pessoa: ");
	scanf("%f", &alt1);
	printf("Insira o nome da segunda pessoa: ");
	scanf("%s", &nome2);
	printf("Insira a altura da segunda pessoa: ");
	scanf("%f", &alt2);
	media = (alt1 + alt2) / 2;
	printf("A m�dia entre a altura de %s e %s � %f /n", nome1, nome2, media);
	return(0);
}
