#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
 
#define TAM 2


int main () {  
 		setlocale(LC_ALL, "");

	int i;
 	int numero[TAM];
 	
 		printf("\n===== Solicitando dados=====: \n");
 		 for (i = 0; i < TAM; i++) {
			do { 
			printf("\nDigite o %i° número: ", i + 1);
				scanf("%d",&numero[i]);
			
				if (numero[i] <= 0 || numero[i] %2!= 0) {
					printf ("\nPorfavor, para continuar digite novamente os valores inteiro positivo e par \n");
				}
			} while (numero[i] <= 0 || numero[i] %2 !=0);
	  }

		printf("\n====Segue seus número na ordem inversa====\n");
			
			for (i = 0; i >= TAM; i--){
				printf("%d", numero[i]);
			}
		
				printf("%d \n");
	
	return 0;
}
	
