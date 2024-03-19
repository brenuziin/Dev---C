#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main () {
	
	    setlocale(LC_ALL, ""); //Indentificar o Idioma	
	   
	// Declarando Variáveis
	
	int idadeAceita = 18, idadeNegada = 65, idadeMedia = 16, idade;
	
	// Solicitando dados para o Usuário
	
	printf("\nDigite sua Idade: ");
	scanf("%i", &idade);
    
	
	fflush(stdin);
	
    // Fazendo o Calculo
    
   if (idade == idadeMedia){ 
   printf("\nVocê está na faixa de Idade, o voto é OPCIONAL!");		
    
	}
	
	if (idade < idadeAceita || idade > idadeNegada) {
	    printf("\nVocê Não tem idade para VOTAR!");	


   }else {
   
        printf("\nVocê é OBRIGADO a votar!");	
   }
   
	
	return 0;
}
