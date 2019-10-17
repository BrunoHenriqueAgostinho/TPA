/*
Exercício 4
função: Efetuar a leitura de 3 valores inteiros e apresentar como resultado final o quadrado da soma dos números
Autor: Bruno Henrique Agostinho da Silva
Data de Criação: 28/09/2019 
*/
#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num1 = 0, num2 = 0, num3 = 0, soma = 0, quad;
	printf("Efetua a leitura de 3 valores inteiros e apresenta como resultado final o quadrado da soma dos números \n");
	printf("Insira o primeiro número: ");
	scanf("%i",&num1);
	printf("Insira o segundo número: ");
	scanf("%i", &num2);
	printf("Insira o terceiro número: ");
	scanf("%i", &num3);
	soma = num1 + num2 + num3;
	quad = soma * soma;
	printf("O quadrado da soma dos números é: %i \n", quad);
	system("pause");
}

