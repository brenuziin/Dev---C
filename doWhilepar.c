#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
 

 
 int main () {  
 		setlocale(LC_ALL, "");
 	float quantiPosi = 0;
	int i, quantiNegativos = 0, quantidadePar = 0, quantidadeImp = 0, contador = 0;
 	float numero;
 	
 		printf("==== Solicitando dados======: \n");
			do{
				printf("\nDigite o n�mero: ", i + 1);
				scanf ("%f",&numero);
				
				if (numero < 0) {
					quantiNegativos++;
				
						if(i % 2 == 0){
							quantidadePar++;
						
						} else {
							quantidadeImp++;
							
						}
				 
				} else if ( numero > 0) {
					quantiPosi++;
					
					if (i % 2 == 1){
						quantidadeImp++;	
					
					} else {
						quantidadePar++;
					}
				}			
			contador++;
	
	} while (numero != 0);
		
	printf("\n=======Apresentando Resultados=======\n");
	printf("\nQuantidade de n�meros negativos: %i", quantiNegativos);
	printf("\nQuantidade de n�meros positivos: %.f", quantiPosi);
	printf("\nQuantidade de n�meros impares: %i", quantidadeImp);
	printf("\nQuantidade de n�meros pares: %.i", quantidadePar);
	printf("\nQuantidade de n�meros inseridos: %i", contador);
	
	return 0;
}

