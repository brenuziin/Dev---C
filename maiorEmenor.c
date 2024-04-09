#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
 
#define TAM 5
 
 int main () {  
 		setlocale(LC_ALL, "");
 	
 	float media, soma;
	float notas[TAM];
 	int i;
 	int maiorNota = INT_MIN, menorNota = INT_MAX;
 	
printf("Digite suas notas: \n");
	for (i = 0; i < TAM; i++) {
		printf("Nota %d: ", i + 1);
		scanf ("%f",&notas[i]);
	}
		
		if (maiorNota > notas[i]){
		
			notas[i] = maiorNota;
		
		} if (menorNota < notas[i]) {
			
			notas[i] = menorNota;
			
		}
		
		printf("Maior Número: %i ", maiorNota);
 		printf("\nMenor Número: %i ", menorNota);

	return 0;
}
