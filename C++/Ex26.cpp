/*
Exercício 26
Função: mostrar todos os pares entre dois numeros inseridos 
Autor: Bruno Henrique Agostinho da Silva 
data:16/10/2019
*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int menor=0,maior=0,par=0;
	printf("Insira o menor número : \n");
	scanf("%i", &menor);
	printf("Insira o maior número: \n");
	scanf("%i", &maior);
	if(maior < menor){
		maior=par;
		maior=menor;
		menor=par;
		par=0;
	}
	while(menor <= maior){
		if(menor%2==0){
			printf("o numero %i é par \n", menor);
		}
		menor=menor+1;
	}
}
