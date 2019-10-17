/*
Exercício 1
função: Calcular a área de um retângulo
Autor: Bruno Henrique Agostinho da Silva
Data de Criação: 28/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int alt = 0, comp = 0, a = 0;
	printf("Calcular a área de um retângulo \n");
	printf("Insira o valor da altura: ");
	scanf("%i", &alt);
	printf("Insira o valor do comprimento: ");
	scanf("%i", &comp);
	a = alt * comp;
	printf("A área do retângulo é %i \n", a);
	system("pause");
}
