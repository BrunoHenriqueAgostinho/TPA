/*
Exercício 34
função: Calcula a média anual de 5 alunos, sabendo que cada aluno possui 2 notas.
Autor: Bruno Henrique Agostinho da Silva
Data de Criação: 19/11/2019 
*/
#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int count = 0;
	float result = 0.0, n1 = 0.0, n2 = 0.0;
	for(count = 0; count < 5; count++){
		printf("Insira a primeira nota: ");
		scanf("%f", &n1);
		printf("Insira a segunda nota: ");
		scanf("%f", &n2);
		result = (n1 + n2) / 2;
		printf("O quadrado desse número é %f \n", result);
	}
}
