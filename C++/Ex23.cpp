/*
Exerc�cio 23
fun��o: Recebe dois valores reais e a partir de um menu de op��es, permite que o usu�rio execute diferentes opera��es
Autor: Bruno Henrique Agostinho da Silva
Data de Cria��o: 23/10/2019
*/
#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1 = 0.0, n2 = 0.0, result = 0.0;
	int esco = 0;
	printf("Insira o primeiro valor num�rico: ");
	scanf("%f", &n1);
	printf("Insira o segundo valor num�rico: ");
	scanf("%f", &n2);
	printf("Insira qual das op��es de calculo abaixo voc� deseja executar: \n");
	printf("1 - Adi��o \n");
	printf("2 - Subtra��o \n");
	printf("3 - Multiplica��o \n");
	printf("4 - Divis�o \n");
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
			printf("C�digo de C�lculo Inv�lido");
	}
}
