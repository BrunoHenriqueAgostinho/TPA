/*
Exercício 35
função: Ler 50 números e exibir a soma e a média
Autor: Bruno Henrique Agostinho da Silva
Data de Criação: 19/11/2019 
*/
#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int count = 0;
	float result = 0.0, n = 0.0, soma = 0.0, media = 0.0;
	for(count = 0; count < 50; count++){
		printf("Insira o valor: ");
		scanf("%f", &n);
		soma = soma + n;	
	}
	media = soma / 50;
	printf("A soma desses números é %f\n", soma);
	printf("A média desses números é %f\n", media);
}
