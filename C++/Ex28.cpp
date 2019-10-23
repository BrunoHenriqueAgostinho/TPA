/*
Exercício 28
função: Crie um algoritmo que some todos os números impares entre 1 e o valor digitado pelo usuário
Autor: Bruno Henrique Agostinho da Silva
Data de Criação: 23/10/2019 
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1 = 1, n2 = 0, soma = 0;
	printf("Digite um número: ");
	scanf("%i", &n2);
	while(n1 <= n2){
		if(n1 % 2 == 1){
			soma = soma + n1;
		}
		n1 += 1;
	}
	printf("A soma dos números impares é igual a %i", soma);
}
