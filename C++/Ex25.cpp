/*
Exerc�cio  25
fun��o: Crie um algoritmo que calcule e mostre o quadrado de um n�mero informadopelo usu�rio e sai do programa quando o usu�rio digita 0
Autor: Bruno Henrique Agostinho da Silva
Data de Cria��o: 16/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num = 1, quad = 0;
	while(num != 0){
		printf("Insira um n�mero:  \n");
		scanf("%i", &num);
		if(num != 0){
			quad = num * num;
			printf("O quadrado de %i � %i \n", num, quad);
		}
	}
}
