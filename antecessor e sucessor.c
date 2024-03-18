#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main () {
	
         setlocale(LC_ALL, ""); //Indentificar o Idioma	
	
	// Declarando Variáveis
	int numero, antecessor , sucessor;
	
	// Solicitando dados para o Usuário
	
	printf("\nDigite o Número: "); 
	scanf("%i", &numero);
	


    // Fazendo o Calculo
    sucessor = numero + 1;
    antecessor = numero - 1;
   

	// Exibindo Resultados.

   
	printf("\n=== Exibindo resultados ===\n"); 
    printf("Sucessor: %i \n", sucessor );
    printf("Número: %i \n", numero);
	printf("Antecessor: %i \n", antecessor );
	 
	 
	return 0;
}	
