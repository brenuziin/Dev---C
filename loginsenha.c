#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main () {
    // Declarando Variaveis
    
	setlocale(LC_ALL,"");
    char loginCer [200] = "brenuzin";
    char senhaCer[200]= "1545";	
	char login [200];
    char senha[200];
    
    //Reunindo Informações
    
    printf("\nDigite seu Login: ");
    scanf("%s", &login);
    
    
    printf("\nDigite sua Senha: ");
    scanf("%s", &senha);
    
    //Apresentando Dados
    
    if (strcmp(login, loginCer) == 0 && strcmp(senha, senhaCer) == 0 ) {
    	
		printf("\nOlá Chefe, Seja Bem Vindo Novamente!");
	
	} else {
		
		printf ("\nLogin ou Senha Incorretos, Tente Novamente!");
	}
    
	
	// && -> e = and
	// || -> ou = or
	
  return 0;
  
} 
