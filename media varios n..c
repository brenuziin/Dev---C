#include <stdio.h>
#include <locale.h>

  int main (){
  	    setlocale(LC_ALL,"");
  	       
  	int valores = 1, soma = 0, contador = 0; 
  	float media;
  	
  	
  	while (valores > 0) {
  	
		printf ("Qual seu primeiro número?: ");
  		scanf ("%f",&numero);
  		
  		
  		printf ("Tecle 's' se deseja continuar\n");
  		scanf("%c",&continua);
  		
  		}
  		
  	if (contador == 0)
  	    printf("os numeros nao foram repetidos");
  	    
  	else 
  	        printf("O bloco foi repetido %d vezes", contador);
  	
  	return 0;
  }
