/*
Exerc�cio 30
fun��o: Crie um algoritmo que mostre a tabuada de um n�mero informado pelo usu�rio
Autor: Bruno Henrique Agostinho da Silva
Data de Cria��o: 29/10/2019 
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n = 0, cont = 0, tab = 0;
	printf("Digite o n�mero da tabuada desejada: ");
	scanf("%i", &n);
	for(cont = 0; cont < 11;cont++){
		tab = cont * n;
		printf("%i X %i = %i \n", n, cont, tab);
	}
}
