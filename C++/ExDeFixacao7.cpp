/*
Exerc�cio de fixa��o 7
fun��o: Sabendo que para iluminar corretamente um c�modo � necess�rio para cada m�tro quadrado 18W de pot�ncia, fa�a um algoritmo que leia
duas dimens�es do c�modo, calcule e mostre sua �rea e a pot�ncia de ilumina��o que dever� ser utilizada. 
Autor: Bruno Henrique Agostinho da Silva
Data de Cria��o: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

#define PI 3.1416

int main() {
	setlocale(LC_ALL, "Portuguese");
	float comp = 0.0, larg = 0.0, a = 0.0, poten = 0.0;

	printf("Calcula a pot�ncia necess�ria para iluminar um  c�modo corretamente \n");
	printf("Insira o comprimento do c�modo(em metros): ");
	scanf("%f", &comp);
	printf("Insira a largura do c�modo(em metros): ");
	scanf("%f", &larg);
	a = comp * larg;
	poten = a * 18;
	printf("A �rea do c�modo � %f M� e ser�o necess�rios %f W de pot�ncia para iluminar corretamente o c�modo. \n", a, poten);
	return(0);
}
