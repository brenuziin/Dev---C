#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "");
	int i,numeroInt;
	float soma, media, par, impar; 
	char letra = 'm';
		
	do{
	printf("\nDigite um número: ");
	scanf("%i",&numeroInt);
	 for (i = 0; i <= 0; i++) {
	 	if (i % 2 == 1) {
	 	  printf("%d \n", i);	
		 }
	
	}
	 
 	}
 	    while (letra == 'm');
		 printf("\nMostrando números impares entre 100 e 120:\n");
	      for (i = 0; i <= 0; i++) {
	        if (i % 2 == 0) {
			  printf("%d \n", i);
			} 
		}
		       
			
 	   return 0;
    	
	 }

