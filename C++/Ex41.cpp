/*
Exercício 41
função: Sabendo que a série de Fibonnacci é a seguinte <0, 1, 1, 2, 3, 5, 8, ...>, exiba o Nésimo elemento
Autor: Bruno Henrique Agostinho da Silva
Data de Criação: 20/11/2019 
*/
#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1 = 0, n2 = 1, n3 = 0, quantE = 0, c = 0;
	printf("Insira a posição do elemento desejado na Sequência de Fibonnacci: \n");
	scanf("%i", &quantE);
	for(c = 0; c < quantE; c++){
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
	}
	printf("O %i° elemento da Sequência de Fibonnacci é: %i \n", quantE, n3);
}
