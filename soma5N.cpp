#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");
    int i, numero, resultado=0;
    float media;
    
    // Solitando Dados
    
    for (i = 1; i <=4; i++){
	  printf("Digite o %i� N�mero: ", i);
      scanf("%i",&numero);
	
    
    //Fazendo Calc�los
      resultado = resultado + numero;
      
	  media = resultado / 4;
	
	}
	
	
    
	// Apresentando Resultadods
	
	printf("\n A soma: %i", resultado);
	printf("\n A M�dia: %f", media); 
	
    return 0;
	
}
