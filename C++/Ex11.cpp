/*
Exerc�cio 11
fun��o: Ler um n�mero e verificar se ele � positivo ou negativo.
Autor: Bruno Henrique Agostinho da Silva
Data de Cria��o: 01/010/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	float num = 0.0;
	printf("L� um n�mero e verifica se ele � positivo ou negativo \n");
	printf("Insira um n�mero: ");
	scanf("%f", &num);
	if(num > 0){
		printf(" Positivo\n");
	}
	else if(num < 0){
		printf(" Negativo\n");
	}
	else{
		printf(" N�mero Neutro\n");
	}
	return(0);
}
