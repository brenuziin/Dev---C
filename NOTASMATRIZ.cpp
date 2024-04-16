#include <stdio.h>
#include <locale.h>
#include <ctype.h>


int main (){

	setlocale (LC_ALL, ""); 
	
	char aluno[3][200];
	float numero[3][2];
	float media[2], somaAlunos = 0;
	int somaTotal = 0;
	int i, j;
	
	
	printf("==== Solicitando dados para o usuário ==== \n");
		
		for (i = 0; i < 3; i++) {		
				printf("\nDigite o nome da %i° Diciplina: ",i + 1);
				scanf("%s", &aluno[i]);
				
		
		for (j = 0; j < 2; j++) {		
				printf("\nDigite a %i° nota: ", j + 1);
				scanf("%f", &numero[i][j]);
		    
				somaAlunos += numero[i][j];
			}	
		 
		 media[i] = somaAlunos /(float) 2;
		 somaAlunos = 0; 
			
			printf("\n");
			
		}
		
		
			
	
	printf("\n==== Exibindo dados para o usuário ==== \n");					
		for (i = 0; i < 3; i++){
			printf ("\n%i° Disciplina: %s\n",i + 1, aluno[i]);
			
			
		for (j = 0; j < 2; j++){
				printf ("\n%i° Nota: %.1f ",j + 1, numero[j][i]);
				
			}	
			 printf("\nMédia: %.1f ", media[i]);
			 printf("\n");
		}
		
			
	return 0;
	
}

