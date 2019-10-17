/*
Exercício 8
função: Receber 4 notas de um aluno e calcular sua média
Autor: Bruno Henrique Agostinho da Silva
Data de Criação: 29/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float num1 = 0.0, num2 = 0.0, num3 = 0.0, num4 = 0.0, media = 0.0;
	printf("Recebe 4 notas de um aluno e calcula sua média \n");
	printf("Insira a primeira nota: ");
	scanf("%f", &num1);
	printf("Insira a segunda nota: ");
	scanf("%f", &num2);
	printf("Insira a terceira nota: ");
	scanf("%f", &num3);
	printf("Insira a quarta nota: ");
	scanf("%f", &num4);
	media = (num1 + num2 + num3 + num4) / 4;
	printf("A média das notas do aluno(a) é %f \n", media);
	return(0);
}
