/*
Exercício 33
função: Ler 5 números e exibir o quadrado de cada um deles
Autor: Bruno Henrique Agostinho da Silva
Data de Criação: 19/11/2019 
*/
#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int count = 0, result = 0, n = 0;
	for(count = 0; count < 5; count++){
		printf("Insira um número: ");
		scanf("%i", &n);
		result = n * n;
		printf("O quadrado desse número é %i \n",result);
	}
	
}
