/*
Exerc�cio 5
fun��o: Calcular o pre�o de um terreno retangular, sendo dadas as medidas da frente e de um dos lados do terreno (em metros),
 e o pre�o do metro quadrado do terreno
Autor: Bruno Henrique Agostinho da Silva
Data de Cria��o: 28/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	float comp = 0, larg = 0, a = 0, preco = 0, precoFinal = 0;
	printf("Calcula o pre�o de um terreno retangular \n");
	printf("Insira o comprimento do terreno(em metros): ");
	scanf("%f", &comp);
	printf("Insira a largura do terreno(em metros): ");
	scanf("%f", &larg);
	printf("Insira o pre�o por metro quadrado: ");
	scanf("%f", &preco);
	a = comp * larg;
	precoFinal = a * preco;
	printf("O pre�o do terreno �: %f \n", precoFinal);
	return(0);
}
