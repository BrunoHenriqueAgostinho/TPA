/*
Exerc�cio 22
fun��o:Algoritmo em que o usu�rio digita o n�mero do m�s e mostre a quantidade de dias do m�s correspondente
Considere que fevereiro tem 28 dias
Autor: Bruno Henrique Agostinho da Silva
Data de Cria��o: 23/10/2019
*/
#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int nMes = 0;
	printf("Insira o n�mero correspondente a um m�s: ");
	scanf("%i", &nMes);
	
	switch(nMes){
	
		case 1:
			printf("Janeiro - 31 dias");
			break;

		case 2:
			printf("Fevereiro - 28 dias");
			break;
			
		case 3:
			printf("Mar�o - 31 dias");
			break;
		
		case 4:
			printf("Abril - 30 dias");
			break;
		
		case 5:
			printf("Maio - 31 dias");
			break;
		
		case 6:
			printf("Junho - 30 dias");
			break;
		
		case 7:
			printf("Julho - 31 dias");
			break;
		
		case 8:
			printf("Agosto - 31 dias");
			break;
		
		case 9:
			printf("Setembro - 30 dias");
			break;
		
		case 10:
			printf("Outubro - 31 dias");
			break;
		
		case 11:
			printf("Novembro - 30 dias");
			break;
		
		case 12:
			printf("Dezembro - 31 dias");
			break;
		
		default:
			printf("M�s Inv�lido");
			break;
		
	}
}	
