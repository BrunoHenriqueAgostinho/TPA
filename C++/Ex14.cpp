/*
Exerc�cio 14
fun��o: Crie um algoritmo que leia tr�s n�meros e mostre o maior digitado
Autor: Bruno Henrique Agostinho da Silva
Data de Cria��o: 01/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int num1 = 0, num2 = 0, num3 = 0, maior = 0;
	
	printf("L� tr�s n�meros e mostra o maior digitado \n");
	printf("Insira o primeiro valor: ");
	scanf("%i", &num1);
	printf("Insira o segundo valor: ");
	scanf("%i", &num2);
	printf("Insira o terceiro valor: ");
	scanf("%i", &num3);
	if(num1 > num2 and num1 > num3){
		maior = num1;
	}
	else if(num2 > num3){
		maior = num2;
	}
	else{
		maior = num3;
	}
	printf("O maior valor �: %i \n", maior);
	return(0);
}
