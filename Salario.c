#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main () {
	
         setlocale(LC_ALL, ""); //Indentificar o Idioma	
	
	// Declarando Vari�veis
	float salario, resultado, salarioMin = 1412.00;
	
	// Solicitando dados para o Usu�rio
	
	printf("\nDigite o seu Sal�rio: "); 
	scanf("%f", &salario);
	


    // Fazendo o Calculo
	resultado = salario / salarioMin;

	// Exibindo Resultados.

   
	printf("\n=== Exibindo resultados ===\n"); 
    printf("Sal�rio Minimo Atual: %f \n", salarioMin);
	printf("Sal�rio: %f \n", salario);
	printf("Quantos Sal�rio: %f \n", resultado );
	 
	 
	return 0;
}	
