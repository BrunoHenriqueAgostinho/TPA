/*
Exercício 23
função: Recebe dois valores reais e a partir de um menu de opções, permite que o usuário execute diferentes operações
Autor: Bruno Henrique Agostinho da Silva
Data de Criação: 23/10/2019
*/
#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1 = 0.0, n2 = 0.0, result = 0.0;
	int esco = 0;
	printf("Insira o primeiro valor numérico: ");
	scanf("%f", &n1);
	printf("Insira o segundo valor numérico: ");
	scanf("%f", &n2);
	printf("Insira qual das opções de calculo abaixo você deseja executar: \n");
	printf("1 - Adição \n");
	printf("2 - Subtração \n");
	printf("3 - Multiplicação \n");
	printf("4 - Divisão \n");
	scanf("%i", &esco);
	
	switch(esco){
		case 1:
			result = n1 + n2;
			printf("%f + %f = %f",n1, n2, result);
			break;
			
		case 2:
			result = n1 - n2;
			printf("%f - %f = %f",n1, n2, result);
			break;
			
		case 3:
			result = n1 * n2;
			printf("%f X %f = %f",n1, n2, result);
			break;
			
		case 4:
			result = n1 / n2;
			printf("%f / %f = %f",n1, n2, result);
			break;
			
		default:
			printf("Código de Cálculo Inválido");
	}
}
