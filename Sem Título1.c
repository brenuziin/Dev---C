#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
#include <limits.h>

#define TAM 5
 
 int main () {  
 		setlocale(LC_ALL, "");
 	
	int notas[TAM];
 	int i;
 	int impares = 0, pares = 0;
 	
printf("Digite suas notas: \n");
	for (i = 0; i < TAM; i++) {
		printf("Nota %d: ", i + 1);
		scanf ("%d",&notas[i]);
	  }
	   for (i = 0; i < TAM; i++) {
	   if (i % 2 == 0) {
			pares ++;
   	 	} else {
   	 		impares++;
			}
		}
		
 	    printf ("Quantidade de números pares: %d\n", pares);
 	    printf("Quantidade de números impares: %d", impares);
	        
		
		       
			
 	   return 0;
    	
	 }

