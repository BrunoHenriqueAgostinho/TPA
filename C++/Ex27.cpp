/*
Exerc�cio 27
fun��o: Crie um algoritmo que calcule o fatorial de um n�mero informado pelo usu�rio
Autor: Bruno Henrique Agostinho da Silva
Data de Cria��o: 23/10/2019 
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n = 0, fat = 0, cont = 0;
	printf("Digite um n�mero: ");
	scanf("%i", &n);
	if(n < 0){
		printf("Imposs�vel Calcular");
	}
	else{
		fat = 1;
		cont = n;
		while(cont > 1){
			fat = fat * cont;
			cont = cont - 1;
		}
		printf("O fatorial de %i �: %i", n, fat);
	}
}
