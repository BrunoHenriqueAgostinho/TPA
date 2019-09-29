/*
Exercício 6
função: Efetuar o caluculo e apresentar o valor de uma prestação em atraso, utilizando a formula: prestação = valor + (valor * (taxa/100) * tempo)
Autor: Bruno Henrique Agostinho da Silva
Data de Criação: 29/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	float prest = 0.0, taxa = 0.0, valor = 0.0 ;
	int tempo = 0;
	printf("Efetua o caluculo e apresenta o valor de uma prestação em atraso \n");
	printf("Insira o valor da prestação: ");
	scanf("%f", &valor);
	printf("Insira a taxa(em porcentagem) pelo atraso por dia: ");
	scanf("%f", &taxa);
	printf("Insira o tempo de atraso em dias: ");
	scanf("%i", &tempo);
	prest = valor + (valor * (taxa / 100) * tempo);
	printf("O valor da nova prestação em atraso será de R$ %f \n", prest);
	return(0);
}
