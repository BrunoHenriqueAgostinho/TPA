/*
Exec�cio 18
fun��o: Mostre se um n�mero � par ou �mpar.
Autor: Bruno Henrique Agostinho da Silva
Data de Cria��o: 03/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num = 0, quoc = 0, rest = 0;
	printf("Mostra se um n�mero � par ou �mpar \n");
	printf("Insira um valor num�rico inteiro: ");
	scanf("%i", &num);
	quoc = num / 2;
	rest = num - (quoc * 2); 
	if(rest == 0){
		printf("O n�mero %i � par \n", num);
	}
	else{
		printf("O n�mero %i � �mpar, \n", num);
	}
	return(0);
}

