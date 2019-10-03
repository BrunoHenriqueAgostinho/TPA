/*
Execício 17
função: Ler o nome de um aluno e sua média final. O resultado desse algoritmo deve ser uma mensagem informando se o aluno foi aprovado ou não.
O critério para a aprovação é ter média igual ou maior que 7.
Autor: Bruno Henrique Agostinho da Silva
Data de Criação: 03/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float MF = 0.0;
	char nome[50] = "";
	printf("Ler o nome de um aluno, sua média final e informar se ele foi aprovado ou não. \n");
	printf("Insira o nome do aluno: ");
	scanf("%s", &nome);
	printf("Insira a média final do aluno: ");
	scanf("%f", &MF);
	if(MF >= 7){
		printf("Aluno(a) %s APROVADO. \n", nome);
	}
	else{
		printf("Aluno(a) %s REPROVADO \n", nome);
	}
	return(0);
}

