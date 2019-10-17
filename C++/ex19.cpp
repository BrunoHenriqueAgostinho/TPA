/*
Exercício 19
função: elaborar um algoritmo que leia o número do sia da semana (1 a 7) , sendo que domingo corresponde ao número 1. Caso o número diginado não corresponda a nenhum dia da semana
mostre uma mensagem de erro correspondente.
Autor: Bruno Henrique Agostinho da Silva
Data de Criação: 16/10/2019
*/
 #include <stdio.h>
 #include <windows.h>
 #include <locale.h>
 
 int main(){
 	setlocale(LC_ALL, "Portuguese");
 	int dia = 0;
 	printf("Insira um número correspondente a um dia da semana (1 a 7): ");
 	scanf("%i", &dia);
 	
 	switch(dia){
 		case 1: 
 		printf("Domingo \n");
 		break;
 		
 		case 2:
 		printf("Segunda \n");
 		break;
 		
 		case 3:
 		printf("Terça \n");
 		break;
 		
 		case 4:
 		printf("Quarta \n");
 		break;
 		
 		case 5:
 		printf("Quinta \n");
 		break;
 		
 		case 6:
 		printf("Sexta\n");
 		break;
 		
 		case 7:
 		printf("Sábado\n ");
 		break;
 		
 		default:
 		printf("Esse valor não corresponde a um dia da semana. \n");
 		break;
	 }
	 system("pause");
 }
