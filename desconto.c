#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main () {
	
         setlocale(LC_ALL, ""); //Indentificar o Idioma	
	
	// Declarando Vari�veis
	float valor, resultado, desconto;
	
	// Solicitando dados para o Usu�rio
	
	printf("\nDigite o Valor: "); 
	scanf("%f", &valor);
	


    // Fazendo o Calculo
    
    resultado = valor  - (valor*0.10);


	// Exibindo Resultados.

   
	printf("\n=== Exibindo resultados ===\n"); 
    printf("Vo�� recebeu um Desconto de 10 Porcento %f \n", desconto);
	printf("Valor que voc� digitou: %.0f \n", valor);
	printf("Valor com Desconto: R$ %.0f \n", resultado );
	 
	 
	return 0;
}
