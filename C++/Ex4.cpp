/*
Exerc�cio 4
fun��o: Efetuar a leitura de 3 valores inteiros e apresentar como resultado final o quadrado da soma dos n�meros
Autor: Bruno Henrique Agostinho da Silva
Data de Cria��o: 28/09/2019 
*/
#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int num1 = 0, num2 = 0, num3 = 0, soma = 0, quad;
	printf("Efetua a leitura de 3 valores inteiros e apresenta como resultado final o quadrado da soma dos n�meros \n");
	printf("Insira o primeiro n�mero: ");
	scanf("%i",&num1);
	printf("Insira o segundo n�mero: ");
	scanf("%i", &num2);
	printf("Insira o terceiro n�mero: ");
	scanf("%i", &num3);
	soma = num1 + num2 + num3;
	quad = soma * soma;
	printf("O quadrado da soma dos n�meros �: %i \n", quad);
	system("pause");
}

