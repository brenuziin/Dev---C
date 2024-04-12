#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
 
#define TAM 2

int main () {  
 		setlocale(LC_ALL, "");
 	float soma = 0;
	int i, quantiNegativos = 0;
 	float numero[TAM];
 	
 		printf("==== Solicitando dados======: \n");
			for (i = 0; i < TAM; i++) {
				printf("\nDigite o %i° valor: ", i + 1);
				scanf ("%f",&numero[i]);
				
				if (numero[i] < 0) {
					numero[i] = 0;
					quantiNegativos= 0;
			
				}			
	}
	
			for (i = 0; i < TAM; i++) {
				printf("%i° Número: %.f \n", i + 1, numero[i]);	
	}
	
	printf("\nQuantidade de números negativos: %i", quantiNegativos);
	printf("\nQuantidade de números posirivos: %.f", soma);
	
	return 0;
}
