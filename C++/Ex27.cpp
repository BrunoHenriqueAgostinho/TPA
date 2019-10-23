/*
Exercício 27
função: Crie um algoritmo que calcule o fatorial de um número informado pelo usuário
Autor: Bruno Henrique Agostinho da Silva
Data de Criação: 23/10/2019 
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n = 0, fat = 0, cont = 0;
	printf("Digite um número: ");
	scanf("%i", &n);
	if(n < 0){
		printf("Impossível Calcular");
	}
	else{
		fat = 1;
		cont = n;
		while(cont > 1){
			fat = fat * cont;
			cont = cont - 1;
		}
		printf("O fatorial de %i é: %i", n, fat);
	}
}
