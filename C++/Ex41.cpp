/*
Exerc�cio 41
fun��o: Sabendo que a s�rie de Fibonnacci � a seguinte <0, 1, 1, 2, 3, 5, 8, ...>, exiba o N�simo elemento
Autor: Bruno Henrique Agostinho da Silva
Data de Cria��o: 20/11/2019 
*/
#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1 = 0, n2 = 1, n3 = 0, quantE = 0, c = 0;
	printf("Insira a posi��o do elemento desejado na Sequ�ncia de Fibonnacci: \n");
	scanf("%i", &quantE);
	for(c = 0; c < quantE; c++){
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
	}
	printf("O %i� elemento da Sequ�ncia de Fibonnacci �: %i \n", quantE, n3);
}
