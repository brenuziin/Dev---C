#include <locale.h>
 
#define TAM 10
 
 int main () {  
 		setlocale(LC_ALL, "");
 	float soma = 0;
	int i, quantiNegativos = 0;
 	float numero[TAM];
 	
 		printf("==== Solicitando dados======: \n");
			for (i = 0; i < TAM; i++) {
				printf("\nDigite o n�mero %d: ", i + 1);
				scanf ("%f",&numero[i]);
				
				if (numero[i] < 0) {
					quantiNegativos++;
				
				} else if ( numero[i] > 0) {
					soma += numero[i];
				}			
	}
	
			for (i = 0; i < TAM; i++) {
				printf("N�mero %d: \n", i + 1, numero[i]);	
	}
	
	printf("\nQuantidade de n�meros negativos: %i", quantiNegativos);
	printf("\nQuantidade de n�meros posirivos: %.f", soma);
	
	return 0;
}
	
