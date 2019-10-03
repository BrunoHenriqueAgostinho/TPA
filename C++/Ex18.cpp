/*
Execício 18
função: Mostre se um número é par ou ímpar.
Autor: Bruno Henrique Agostinho da Silva
Data de Criação: 03/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int num = 0, quoc = 0, rest = 0;
	printf("Mostra se um número é par ou ímpar \n");
	printf("Insira um valor numérico inteiro: ");
	scanf("%i", &num);
	quoc = num / 2;
	rest = num - (quoc * 2); 
	if(rest == 0){
		printf("O número %i é par \n", num);
	}
	else{
		printf("O número %i é ímpar, \n", num);
	}
	return(0);
}

