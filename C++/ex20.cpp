/*
Exerc�cio 20
fun��o: Apresentar o nome eo pre�o do lanche conforme  o n�mero da op��o digitado pelo usu�rio
Autor: Bruno Henrique Agostinho da Silva
Data de Cria��o: 16/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int esco = 0;
	printf("Digite o c�digo do lanche (1, 2, 7 ou 15): ");
	scanf("%i", &esco);
	
	switch(esco){
			case 1:
			printf("Cachorro Quente - R$3,50 \n");
			break;
			
			case 2:
			printf("X-Salada - R$5,00 \n");
			break;
			
			case 7:
			printf("X-Burger - R$8,90 \n");
			break;
			
			case 15:
			printf("X-Tudo - 12,70 \n");
			break;
			default:
			printf("C�digo de lanche n�o existente. \n");
			break;
	}
	system("pause");
}


