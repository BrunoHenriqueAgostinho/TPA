/*
Exerc�cio 10
fun��o: ler um n�mero e verificar se ele � maior do que 100. se for, somar 50 a esse n�mero e exibir o valor do n�mero
Autor: Bruno Henrique Agostinho da Silva
Data de Cria��o: 01/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int num = 0;
	
	printf("Verifica se um n�mero � maior do que 100. Se for, soma 50 a esse n�mero \n");
	printf("Insira um valor: ");
	scanf("%i", &num);
	if(num > 100){
		num = num + 50;
	}
	printf("O valor do n�mero �: %i \n", num);
	return(0);
}
