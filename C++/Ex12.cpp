/*
Exerc�cio 12
fun��o: Receber um valor inteiro e se esse valor for maior que 5 e menor que 20 exibir seu cubo.
Autor: Bruno Henrique Agostinho da Silva
Data de Cria��o: 01/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	int num = 0;
	printf("Recebe um valor inteiro e se esse valor for maior que 5 e menor que 20 exibe seu cubo \n");
	printf("Insira um valor num�rico inteiro: ");
	scanf("%i", &num);
	if(num > 5 and num < 20){
		num = num * num * num;
	}
	printf("O valor �: %i \n", num);
	return(0);
}
