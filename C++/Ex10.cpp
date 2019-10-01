/*
Exercício 10
função: ler um número e verificar se ele é maior do que 100. se for, somar 50 a esse número e exibir o valor do número
Autor: Bruno Henrique Agostinho da Silva
Data de Criação: 01/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	int num = 0;
	
	printf("Verifica se um número é maior do que 100. Se for, soma 50 a esse número \n");
	printf("Insira um valor: ");
	scanf("%i", &num);
	if(num > 100){
		num = num + 50;
	}
	printf("O valor do número é: %i \n", num);
	return(0);
}
