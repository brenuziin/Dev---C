#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main () {
	
	    setlocale(LC_ALL, ""); //Indentificar o Idioma	
	   
	// Declarando Vari�veis
	
	int idadeAceita = 18, idadeNegada = 65, idadeMedia = 16, idade;
	
	// Solicitando dados para o Usu�rio
	
	printf("\nDigite sua Idade: ");
	scanf("%i", &idade);
    
	
	fflush(stdin);
	
    // Fazendo o Calculo
    
   if (idade == idadeMedia){ 
   printf("\nVoc� est� na faixa de Idade, o voto � OPCIONAL!");		
    
	}
	
	if (idade < idadeAceita || idade > idadeNegada) {
	    printf("\nVoc� N�o tem idade para VOTAR!");	


   }else {
   
        printf("\nVoc� � OBRIGADO a votar!");	
   }
   
	
	return 0;
}
