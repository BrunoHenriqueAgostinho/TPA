/*
Exercício 29
função: crie um algoritmo que calcule e mostre a tabuada do 7
Autor: Bruno Henrique Agostinho da Silva
Data de Criação: 29/10/2019 
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int cont = 0, tab = 0;
	for(cont = 0;cont < 11; cont++){
		tab = cont * 7;
		printf("7 X %i = %i \n", cont, tab);
	}
	
}
