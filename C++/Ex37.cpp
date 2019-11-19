/*
Exercício 38
função: Ler 10 números e exibir o maior e o menornúmero digitado.
Autor: Bruno Henrique Agostinho da Silva
Data de Criação: 19/11/2019 
*/
#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int count = 0, n1 = 0, n2 = 0, maior = 0;

	for(count = 0; count < 10; count++){
		if(count == 0){
			printf("Insira um valor: ");
			scanf("%i", &n1);
			maior = n1;
		}
		else{
			printf("Insira um valor: ");
			scanf("%i", &n2);
			if(maior < n2){
				maior = n2;
			}
		}	
	} 
	printf("O maior número digitado foi %i\n", maior);
}
