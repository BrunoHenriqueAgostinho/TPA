/*
Exerc�cio 38
fun��o: Ler 10 n�meros e exibir o maior e o menorn�mero digitado.
Autor: Bruno Henrique Agostinho da Silva
Data de Cria��o: 19/11/2019 
*/
#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int count = 0, n1 = 0, n2 = 0, maior = 0, menor = 0;

	for(count = 0; count < 10; count++){
		if(count == 0){
			printf("Insira um valor: ");
			scanf("%i", &n1);
			maior = n1;
			menor = n1;
		}
		else{
			printf("Insira um valor: ");
			scanf("%i", &n2);
			if(maior < n2){
				maior = n2;
			}
			else if(n2 < menor){
				menor = n2;
			}
		}	
	} 
	printf("O maior n�mero digitado foi %i\n", maior);
	printf("O menor n�mero digitado foi %i\n", menor);
}
