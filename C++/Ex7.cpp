/*
Exercício 7
função: Crie um algoritmo que leia o salário de um funcionário e o percentual de aumento, calcule e mostre o valor do novo salário
Autor: Bruno Henrique Agostinho da Silva
Data de Criação: 29/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	float sal = 0.0, porcent = 0.0, novoSal = 0.0;
	printf("Calcule e mostre o valor do novo salário \n");
	printf("Insira o valor do salário: ");
	scanf("%f", &sal);
	printf("Insira a porcentagem do aumento: ");
	scanf("%f", &porcent);
	novoSal = sal + (sal * (porcent / 100));
	printf("O novo salário é igual a R$ %f \n", novoSal);
	system("pause");
}

