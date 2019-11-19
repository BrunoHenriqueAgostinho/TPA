/*
Exercício 32
função: Ler 5 números e mostrar a metade de cada um deles
Autor: Bruno Henrique Agostinho da Silva
Data de Criação: 19/11/2019 
*/
#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int count = 0;
	float result = 0.0, n = 0.0;
	for(count = 0; count < 5; count++){
		printf("Insira um número: ");
		scanf("%f", &n);
		result = n / 2;
		printf("A metede desse número é %.2f \n",result);
	}
	
}
