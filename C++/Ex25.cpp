/*
Exercício  25
função: Crie um algoritmo que calcule e mostre o quadrado de um número informadopelo usuário e sai do programa quando o usuário digita 0
Autor: Bruno Henrique Agostinho da Silva
Data de Criação: 16/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num = 1, quad = 0;
	while(num != 0){
		printf("Insira um número:  \n");
		scanf("%i", &num);
		if(num != 0){
			quad = num * num;
			printf("O quadrado de %i é %i \n", num, quad);
		}
	}
}
