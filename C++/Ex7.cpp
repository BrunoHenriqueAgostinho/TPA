/*
Exerc�cio 7
fun��o: Crie um algoritmo que leia o sal�rio de um funcion�rio e o percentual de aumento, calcule e mostre o valor do novo sal�rio
Autor: Bruno Henrique Agostinho da Silva
Data de Cria��o: 29/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	float sal = 0.0, porcent = 0.0, novoSal = 0.0;
	printf("Calcule e mostre o valor do novo sal�rio \n");
	printf("Insira o valor do sal�rio: ");
	scanf("%f", &sal);
	printf("Insira a porcentagem do aumento: ");
	scanf("%f", &porcent);
	novoSal = sal + (sal * (porcent / 100));
	printf("O novo sal�rio � igual a R$ %f \n", novoSal);
	system("pause");
}

