/*
Exerc�cio 8
fun��o: Receber 4 notas de um aluno e calcular sua m�dia
Autor: Bruno Henrique Agostinho da Silva
Data de Cria��o: 29/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float num1 = 0.0, num2 = 0.0, num3 = 0.0, num4 = 0.0, media = 0.0;
	printf("Recebe 4 notas de um aluno e calcula sua m�dia \n");
	printf("Insira a primeira nota: ");
	scanf("%f", &num1);
	printf("Insira a segunda nota: ");
	scanf("%f", &num2);
	printf("Insira a terceira nota: ");
	scanf("%f", &num3);
	printf("Insira a quarta nota: ");
	scanf("%f", &num4);
	media = (num1 + num2 + num3 + num4) / 4;
	printf("A m�dia das notas do aluno(a) � %f \n", media);
	return(0);
}
