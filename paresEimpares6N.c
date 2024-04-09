#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
#include <limits.h>

#define TAM 5
 
 int main () {  
 		setlocale(LC_ALL, "");
 	
 	float media, soma;
	int notas[TAM];
 	int i;
 	int maiorNota = INT_MIN, menorNota = INT_MAX;
 	
printf("Digite suas notas: \n");
	for (i = 0; i < TAM; i++) {
		printf("Nota %d: ", i + 1);
		scanf ("%d",&notas[i]);
		
	 	if (i % 2 == 1) {
	 	  printf("%d \n", i);	
		 }
	   if (i % 2 == 0) {
			  printf("%d \n", i);
			} 
	
	 }
 	    
	        
		
		       
			
 	   return 0;
    	
	 }

