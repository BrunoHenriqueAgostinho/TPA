/*
Exerc�cio 33
fun��o: Ler 5 n�meros e exibir o quadrado de cada um deles
Autor: Bruno Henrique Agostinho da Silva
Data de Cria��o: 19/11/2019 
*/
#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int count = 0, result = 0, n = 0;
	for(count = 0; count < 5; count++){
		printf("Insira um n�mero: ");
		scanf("%i", &n);
		result = n * n;
		printf("O quadrado desse n�mero � %i \n",result);
	}
	
}
