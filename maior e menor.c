#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main () {
	
	    setlocale(LC_ALL, ""); //Indentificar o Idioma	
	   
	// Declarando Vari�veis
	
	int maior, menor, resultado, numeroUm, numeroDois, produto;
	float  media;
	
	// Solicitando dados para o Usu�rio
	
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
	printf("\nPrimeiro N�mero: %i", numeroUm); 
    printf("\nSegundo N�mero: %i", numeroDois);
	printf("\n\nMaior N�mero: %i \n", maior);
	printf("Menor N�mero: %i \n", menor ); 
	printf ("\n\nSoma dos Numeros: %i \n", resultado);
	printf ("M�dia: %.2f \n", media);
		
		
		
	if (numeroUm == numeroDois) {
			printf("Os n�meros s�o iguais\n");
			
	}
	
	
	return 0;
}
