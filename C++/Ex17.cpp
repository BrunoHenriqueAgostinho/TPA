/*
Exec�cio 17
fun��o: Ler o nome de um aluno e sua m�dia final. O resultado desse algoritmo deve ser uma mensagem informando se o aluno foi aprovado ou n�o.
O crit�rio para a aprova��o � ter m�dia igual ou maior que 7.
Autor: Bruno Henrique Agostinho da Silva
Data de Cria��o: 03/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float MF = 0.0;
	char nome[50] = "";
	printf("Ler o nome de um aluno, sua m�dia final e informar se ele foi aprovado ou n�o. \n");
	printf("Insira o nome do aluno: ");
	scanf("%s", &nome);
	printf("Insira a m�dia final do aluno: ");
	scanf("%f", &MF);
	if(MF >= 7){
		printf("Aluno(a) %s APROVADO. \n", nome);
	}
	else{
		printf("Aluno(a) %s REPROVADO \n", nome);
	}
	return(0);
}

