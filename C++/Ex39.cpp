/*
Exercício 38
função: Ler 2 valores e mostrar a soma de todos os inteiros existentes entre os dois valores lidos(inclusive).
Autor: Bruno Henrique Agostinho da Silva
Data de Criação: 19/11/2019 
*/
#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1 = 0, n2 = 0, soma = 0, t = 0;
	printf("Insira o primeiro valor: ");
	scanf("%i", &n1);
	printf("Insira o segundo valor: ");
	scanf("%i", &n2);
	if(n1 > n2){
		t = n1;
		n1 = n2;
		n2 = t;
	}
	for(int c = n1; c <= n2; c++){
		soma = soma + c;
	} 
	printf("A soma dos valores entre %i e %i é igual a: %i\n", n1, n2, soma);
}
