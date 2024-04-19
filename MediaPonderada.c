#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <time.h>

int main (){

	setlocale (LC_ALL, ""); 
	
	char aluno[3][2000];
	float numero[3][3];
	float media[3], somaAlunos = 0;
	int peso[3] = {3,3,4};
	int pesoSoma = 10;
	int i, j;
	
	
	printf("==== Solicitando dados para o usuário ==== \n");
		
		for (i = 0; i < 1; i++) {		
				printf("\nDigite o nome da %i° Diciplina: ",i + 1);
				scanf("%s", &aluno[i]);
				

		
		for (j = 0; j < 3; j++) {		
				do{
				printf("\nDigite a %i° nota: ", j + 1);
				scanf("%f", &numero[i][j]);			
		        
				if (numero[i][j] < 0 || numero[i][j] > 10){
				printf("\nDigite um número entre 0 a 10\n");
				sleep(2);
				} 
				
				 
				 
				} while (numero[i][j] < 0 || numero[i][j] > 10);   
			}	
		system ("cls");
		
		printf("\n");
			
		}
		
		
	
	printf("\n==== Exibindo dados para o usuário ==== \n");					
		for (i = 0; i < 1; i++){
			printf ("\n\n%i° Disciplina: %s\n",i + 1, aluno[i]);
			
			media[i] = 0;
			
		for (j = 0; j < 3; j++){
				printf ("\n%i° Nota: %.1f ",j + 1, numero[i][j]);
				
				media[i] += numero[i][j] * peso[j];
			}	
			
			media[i] /= pesoSoma;
			 printf("\nMédia: %.1f ", media[i]);
			 printf("\n");
			 
	}
			
	return 0;
	
}

