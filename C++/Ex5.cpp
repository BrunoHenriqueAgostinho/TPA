/*
Exercício 5
função: Calcular o preço de um terreno retangular, sendo dadas as medidas da frente e de um dos lados do terreno (em metros),
 e o preço do metro quadrado do terreno
Autor: Bruno Henrique Agostinho da Silva
Data de Criação: 28/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	float comp = 0, larg = 0, a = 0, preco = 0, precoFinal = 0;
	printf("Calcula o preço de um terreno retangular \n");
	printf("Insira o comprimento do terreno(em metros): ");
	scanf("%f", &comp);
	printf("Insira a largura do terreno(em metros): ");
	scanf("%f", &larg);
	printf("Insira o preço por metro quadrado: ");
	scanf("%f", &preco);
	a = comp * larg;
	precoFinal = a * preco;
	printf("O preço do terreno é: %f \n", precoFinal);
	return(0);
}
