#include <stdio.h>
#include <locale.h>
#include <ctype.h>


int main (){

	setlocale (LC_ALL, ""); 
	
	char aluno[3][200];
	char numero[3][5][200];
	int i, j;
	
	
	printf("==== Solicitando dados para o usuário ==== \n");
		
		for (i = 0; i < 3; i++) {		
				printf("\nDigite o nome da %i° Banda: ",i + 1);
				scanf("%s", &aluno[i]);
				
		
		for (j = 0; j < 5; j++) {		
				printf("\nDigite o %i° Integrante: ", j + 1);
				scanf("%s", &numero[i][j]);
			}	
		 
			printf("\n");
		}
			
	printf("\n==== Exibindo dados para o usuário ==== \n");					
	
		for (i = 0; i < 3; i++){
			printf ("\n%i° Banda: %s\n",i + 1, aluno[i]);
		
		for (j = 0; j < 5; j++){
			printf ("\n%d° Integrante: %s\n",j + 1, numero[i][j]);
						
			}
	}
			
	return 0;
	
}

