/*
Exerc�cio 1
fun��o: Calcular a �rea de um ret�ngulo
Autor: Bruno Henrique Agostinho da Silva
Data de Cria��o: 28/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int alt = 0, comp = 0, a = 0;
	printf("Calcular a �rea de um ret�ngulo \n");
	printf("Insira o valor da altura: ");
	scanf("%i", &alt);
	printf("Insira o valor do comprimento: ");
	scanf("%i", &comp);
	a = alt * comp;
	printf("A �rea do ret�ngulo � %i \n", a);
	system("pause");
}
