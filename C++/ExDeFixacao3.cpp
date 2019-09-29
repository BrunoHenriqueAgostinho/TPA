/*
Exercício de fixação 3
função: Crie um programa que receba o ano de nascimento de um aluno e mostra sua idade em anos e em dias
Autor: Bruno Henrique Agostinho da Silva
Data de Criação: 29/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	int anoNasc = 0, anoAtual = 0, idadeAnos = 0, idadeDias = 0;
	printf("Receba o ano de nascimento de um aluno e mostra sua idade em anos e em dias \n");
	printf("Insira o anos de nascimento do aluno: ");
	scanf("%i", &anoNasc);
	printf("Insira o ano em que estamos: ");
	scanf("%i", &anoAtual);
	idadeAnos = anoAtual - anoNasc;
	idadeDias = idadeAnos * 365;
	printf("A idade do aluno em anos é %i. \n", idadeAnos);
	printf("A idade do alunos em dias é %i. \n", idadeDias);
	return(0);
}
