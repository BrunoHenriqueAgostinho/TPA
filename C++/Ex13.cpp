/*
Exercício 13
função: Crie um algoritmo que leia dois números e mostre o maior digitado.
Autor: Bruno Henrique Agostinho da Silva
Data de Criação: 01/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int num1 = 0, num2 = 0;
	printf("Lê dois números e mostra o maior digitado \n");
	printf("Insira o primeiro valor: ");
	scanf("%i", &num1);
	printf("Insira o segundo valor: ");
	scanf("%i", &num2);
	if(num1 > num2){
		printf(" O maior valor é %i \n", num1);
	}
	else if(num2 > num1){
		printf(" O maior valor é %i \n", num2);
	}
	else{
		printf(" Os números tem valores iguais \n");
	}
	return(0);
}
