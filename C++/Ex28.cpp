/*
Exerc�cio 28
fun��o: Crie um algoritmo que some todos os n�meros impares entre 1 e o valor digitado pelo usu�rio
Autor: Bruno Henrique Agostinho da Silva
Data de Cria��o: 23/10/2019 
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1 = 1, n2 = 0, soma = 0;
	printf("Digite um n�mero: ");
	scanf("%i", &n2);
	while(n1 <= n2){
		if(n1 % 2 == 1){
			soma = soma + n1;
		}
		n1 += 1;
	}
	printf("A soma dos n�meros impares � igual a %i", soma);
}
