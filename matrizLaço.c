#include <stdio.h>
#include <locale.h>
#include <ctype.h>


int main (){

	setlocale (LC_ALL, ""); 
	
	
	int numero [2][2];
	int i, j;
	
	
	printf("Digite os elementos para Matriz: \n");
		
		for (i = 0; i < 2; i++) {
			
			for (j = 0; j < 2; j++){
				
				printf("\nElemento da linha %d Coluna %d: ", i + 1, j + 1);
				scanf("%d", &numero[i][j]);
			}
		}
		
		for (i = 0; i < 2; i++){
			
			for (j = 0; j < 2; j++){
				
				printf ("\nElemento da linha %d coluna %d: %d", i + 1, j + 1, numero [i][j]);
			}	
	}
		

	return 0;
	
}
