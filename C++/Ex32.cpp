/*
Exerc�cio 32
fun��o: Ler 5 n�meros e mostrar a metade de cada um deles
Autor: Bruno Henrique Agostinho da Silva
Data de Cria��o: 19/11/2019 
*/
#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int count = 0;
	float result = 0.0, n = 0.0;
	for(count = 0; count < 5; count++){
		printf("Insira um n�mero: ");
		scanf("%f", &n);
		result = n / 2;
		printf("A metede desse n�mero � %.2f \n",result);
	}
	
}
