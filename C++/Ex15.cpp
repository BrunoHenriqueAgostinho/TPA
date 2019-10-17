/*
Exercício 15
função: Crie um algoritmo que leia três números e mostre em ordem crescente
Autor: Bruno Henrique Agostinho da Silva
Data de Criação: 01/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int num1 = 0, num2 = 0, num3 = 0, maior = 0, meio = 0, menor = 0;
	
	printf("Lê três números e mostra em ordem crescente \n");
	printf("Insira o primeiro valor: ");
	scanf("%i", &num1);
	printf("Insira o segundo valor: ");
	scanf("%i", &num2);
	printf("Insira o terceiro valor: ");
	scanf("%i", &num3);
	if(num1 > num2 and num1 > num3){
		maior = num1;
		if(num2 > num3){
			menor = num3;
			meio = num2;
		}
		else{
			menor = num2;
			meio = num3;
		}
	}
	else if(num2 > num1 and num2 > num3){
		maior = num2;
		if (num1 > num3){
			menor = num3;
			meio = num1;
		}
		else{
			menor = num1;
			meio = num3;
		}
	}
	else if(num3 > num1 and num3 > num2){
		maior = num3;
		if(num1 > num2){
			menor = num2;
			meio = num1;
		}
		else{
			menor = num1;
			meio = num2;
		}
	}
	printf("Ordem Crescente: %i %i %i \n", menor, meio, maior);
	return(0);
}
