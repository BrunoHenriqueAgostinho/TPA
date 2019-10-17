/*
Exercício 9
função: Exibir o quociente e o resto de uma divisão de um número por outro
Autor: Bruno Henrique Agostinho da Silva
Data de Criação: 29/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int dividendo = 0, divisor = 0, quociente = 0, resto = 0;
	printf("Exibe o quociente e o resto de uma divisão \n");
	printf("Insira o valor do dividendo: ");
	scanf("%i", &dividendo);
	printf("Insira o valor do divisor: ");
	scanf("%i", &divisor);
	quociente = dividendo / divisor;
	resto = dividendo - (quociente * divisor);
	printf("O valor do quociente é %i e o valor do resto é %i \n", quociente, resto);
	return(0);
}
