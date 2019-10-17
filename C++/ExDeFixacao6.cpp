/*
Exercício de fixação 6
função: Crie um algoritmo que leia o raio e calcule e mostre:
-O comprimento de uma esfera(C = 2 * PI * r)
-A área de uma esfera(A = PI * r*r)
-O volume de uma esfera(V = (3/4) * PI * r * r * r)
Autor: Bruno Henrique Agostinho da Silva
Data de Criação: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

#define PI 3.1416

int main() {
	setlocale(LC_ALL, "Portuguese");
	float r = 0.0, comp = 0.0, a = 0.0, vol = 0.0;

	printf("Calcula o comprimento, a área e o volume de uma esfera baseado no raio \n");
	printf("Insira o valor do raio: ");
	scanf("%f", &r);
	comp = 2 * PI * r;
	a = r * r * PI;
	vol = (r * r * r) * PI * 0.75;
	printf("O comprimento dessa esfera será %f \n", comp);
	printf("A área dessa esfera será %f \n", a);
	printf("O volume dessa esfera será %f \n", vol);
	return(0);
}
