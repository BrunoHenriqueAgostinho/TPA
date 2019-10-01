/*
Exercício 12
função: Receber um valor inteiro e se esse valor for maior que 5 e menor que 20 exibir seu cubo.
Autor: Bruno Henrique Agostinho da Silva
Data de Criação: 01/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	int num = 0;
	printf("Recebe um valor inteiro e se esse valor for maior que 5 e menor que 20 exibe seu cubo \n");
	printf("Insira um valor numérico inteiro: ");
	scanf("%i", &num);
	if(num > 5 and num < 20){
		num = num * num * num;
	}
	printf("O valor é: %i \n", num);
	return(0);
}
