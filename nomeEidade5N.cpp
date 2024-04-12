#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
 
#define TAM 5
 
 int main () {  
 		setlocale(LC_ALL, "");
	char nome[TAM
	][200];
 	int i;
 	int idade[TAM];
 	
printf("Digite o nome das 5 Pessoas: \n");
	for (i = 0; i < TAM; i++) {
		printf("\nNome da Pessoa %d: ", i + 1);
		scanf ("%s",&nome[i]);
		printf("Idade da Pessoa %d: ", i + 1);
		scanf ("%f",&idade[i]);
	}
	
	




  	
	return 0;
}
