/*
Exerc�cio 6
fun��o: Efetuar o caluculo e apresentar o valor de uma presta��o em atraso, utilizando a formula: presta��o = valor + (valor * (taxa/100) * tempo)
Autor: Bruno Henrique Agostinho da Silva
Data de Cria��o: 29/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	float prest = 0.0, taxa = 0.0, valor = 0.0 ;
	int tempo = 0;
	printf("Efetua o caluculo e apresenta o valor de uma presta��o em atraso \n");
	printf("Insira o valor da presta��o: ");
	scanf("%f", &valor);
	printf("Insira a taxa(em porcentagem) pelo atraso por dia: ");
	scanf("%f", &taxa);
	printf("Insira o tempo de atraso em dias: ");
	scanf("%i", &tempo);
	prest = valor + (valor * (taxa / 100) * tempo);
	printf("O valor da nova presta��o em atraso ser� de R$ %f \n", prest);
	return(0);
}
