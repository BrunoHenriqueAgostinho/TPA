/*
Exerc�cio 9
fun��o: Exibir o quociente e o resto de uma divis�o de um n�mero por outro
Autor: Bruno Henrique Agostinho da Silva
Data de Cria��o: 29/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	int dividendo = 0, divisor = 0, quociente = 0, resto = 0;
	printf("Exibe o quociente e o resto de uma divis�o \n");
	printf("Insira o valor do dividendo: ");
	scanf("%i", &dividendo);
	printf("Insira o valor do divisor: ");
	scanf("%i", &divisor);
	quociente = dividendo / divisor;
	resto = dividendo - (quociente * divisor);
	printf("O valor do quociente � %i e o valor do resto � %i \n", quociente, resto);
	return(0);
}
