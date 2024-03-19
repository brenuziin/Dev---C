#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main () {
	
	    setlocale(LC_ALL, ""); //Indentificar o Idioma	
	   
	// Declarando Variáveis
	
	int maior, menor, resultado, numeroUm, numeroDois, produto;
	float  media;
	
	// Solicitando dados para o Usuário
	
	printf("\nDigite o Primeiro numero: ");
	scanf("%i", &numeroUm);
    
	printf("\nDigite o Segundo numero: ");
	scanf("%i", &numeroDois);
    
	fflush(stdin);
	
	
    // Fazendo o Calculo
    
   resultado = numeroUm + numeroDois;
   
   media = resultado / (float)2;
   
   produto = numeroUm * numeroDois;
   
   if (numeroUm > numeroDois){ 		
     	maior = numeroUm;
      	menor = numeroDois;
	
	} else {	
	    maior = numeroDois;
	    menor = numeroUm;
   }

	// Exibindo Resultados.

	
	printf("\n=== Exibindo resultados ===\n");
	printf("\nPrimeiro Número: %i", numeroUm); 
    printf("\nSegundo Número: %i", numeroDois);
	printf("\n\nMaior Número: %i \n", maior);
	printf("Menor Número: %i \n", menor ); 
	printf ("\n\nSoma dos Numeros: %i \n", resultado);
	printf ("Média: %.2f \n", media);
		
		
		
	if (numeroUm == numeroDois) {
			printf("Os números são iguais\n");
			
	}
	
	
	return 0;
}
