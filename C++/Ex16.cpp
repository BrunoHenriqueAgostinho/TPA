/*
Exercício 16
função: Dada a idade de um nadador classifique-o em uma das seguintes categorias:
-Infantil: 5 a 11 anos;
-Juvenil: 12 a 17 anos;
-Adulto: > 18 anos.
Autor: Bruno Henrique Agostinho da Silva
Data de Criação: 03/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int idade = 0;
	printf("Classifica um nadador em uma das seguintes categorias: \n - Infantil: 5 a 11 anos; \n - Juvenil: 12 a 17 anos; \n - Adulto: > 18 anos. \n");
	printf("Insira a idade do candidato: ");
	scanf("%i", &idade);
	if(idade < 5){
		printf("A idade está dentro de nenhuma categoria. \n");
	}
	else if(idade >= 5 and idade <= 11){
		printf("A categoria do nadador é: Infantil. \n");
	}
	else if(idade >= 12 and idade <= 17){
		printf("A categoria do nadador é: Juvenil. \n");
	}
	else if(idade >= 18){
		printf("A categoria do nadador é: Adulta. \n");
	}
	return(0);
}

