#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main () {
	
         setlocale(LC_ALL, ""); //Indentificar o Idioma	
	
	// Declarando Variáveis
	float salario, resultado, salarioMin = 1412.00;
	
	// Solicitando dados para o Usuário
	
	printf("\nDigite o seu Salário: "); 
	scanf("%f", &salario);
	


    // Fazendo o Calculo
	resultado = salario / salarioMin;

	// Exibindo Resultados.

   
	printf("\n=== Exibindo resultados ===\n"); 
    printf("Salário Minimo Atual: %f \n", salarioMin);
	printf("Salário: %f \n", salario);
	printf("Quantos Salário: %f \n", resultado );
	 
	 
	return 0;
}	
