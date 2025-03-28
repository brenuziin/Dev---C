#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
 
 int main () {
 	int inicio, fim, soma;
 	
 	    printf("Digite quando incio o jogo: ");
 	    scanf("%i", &inicio);
 	    
 	    printf("Digite quando terminou o jogo: ", "Horas");
 	    scanf("%i",&fim);
 	    
 	    if(inicio > fim){
 	    soma = (24-inicio)+ fim;   
 	    }else {
 	        soma = fim - inicio;
 	    }
 	   
 	    printf("Suas horas totais de jogo foram: %i horas", soma);
 	    
 	      return 0;
}
