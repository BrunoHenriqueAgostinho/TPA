/*
Exerc�cio 42
fun��o: Receba um valor inteiro e exiba todos os n�meros primos de 1 at� ele.
Autor: Bruno Henrique Agostinho da Silva
Data de Cria��o: 20/11/2019 
*/
#include <stdio.h>
#include <locale.h>
#include <windows.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n = 0, resto = 0, valorC = 0;
	printf("Digite at� qual n�mero voc� deseja saber os primos: \n");
	scanf("%i", &n);
	if(n < 2){
		printf("N�o existem n�meros primos inferiores a  2.\n");
	}
	else{
		for(int c = 2; c <= n; c++){
			for(int c2 = 2; c2 < 8 &&  c2 != c; c2++){
				resto = c % c2;
				if(resto == 0){
					valorC = valorC + 1;
				}
			}
			if(valorC == 0){
				printf("%i\n", c);
			}	
		}
	}	
}
