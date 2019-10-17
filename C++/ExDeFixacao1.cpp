/*
Exercício de Fixação 1
função: Calcular o IMC de um aluno, sabendo que  o calculo é feito da seguinte forma: peso / altura * altura
Autor: Bruno Henrique Agostinho da Silva
Data de Criação: 29/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float alt = 0.0, peso = 0.0, imc = 0.0;
	printf("Calcula o IMC de um aluno \n");
	printf("Indique a altura do aluno(em metros): ");
	scanf("%f", &alt);
	printf("Indique o peso do aluno(em Kg): ");
	scanf("%f", &peso);
	imc = peso / (alt * alt);
	printf("O IMC do aluno é %f \n", imc);
	return(0);
}
