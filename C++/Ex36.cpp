/*
Exerc�cio 36
fun��o: Ler 10 valores e escrever quantos desses valores s�o negativos.
Autor: Bruno Henrique Agostinho da Silva
Data de Cria��o: 19/11/2019 
*/
#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int count = 0, n = 0, neg = 0;

	for(count = 0; count < 10; count++){
		printf("Insira o valor: ");
		scanf("%i", &n);
		if(n < 0){
			neg = neg + 1;
		}	
	}
	printf("Desses n�meros %i s�o negativos.\n", neg);
}
