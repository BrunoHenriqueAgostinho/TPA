/*
Exerc�cio 24
Fun��o: leia e mostre o nome de 50 pessoas
Autor: Bruno Henrique Agostinho da Silva
Data de cria��o: 16/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	char nome[50]="";
	int n = 0;
	while(n < 50){
		printf("Insira o nome %i: \n",n+1);
		gets(nome);
		printf("O nome inserido � %s \n\n" ,nome);
		fflush(stdin);
		n=n+1;
	}
}
