#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>

int main () {
	
         setlocale(LC_ALL, ""); //Indentificar o Idioma	
	
	// Declarando Variáveis
	float salario, resultado, salarioMin = 1412.00;
	char nome[200];
	char sexo;
	int idade, resposta;
	
	// Solicitando dados para o Usuário
	do{
		
	 printf("Escolha uma opção:\n");
	 printf("1 - Adicionar Pessoa \n");
	 printf("2 - Exibir Resultados e sair");
	 printf("\nDigite sua resposta: ");
	 scanf("%d",&resposta);
	 	
	 switch (resposta){
	 	
	 printf("--Adicionando Pessoas--");
	
	 printf("\n\n\nDigite seu nome: ");
	 scanf("%s", &nome);
	
     printf ("\nDigite sua Idade: ");
     scanf("%i", &idade);

 	 printf("\nOpções de sexo: \n");
  	 printf ("M - Masculino\n");
	 printf("F - Feminino\n");
	 printf("Escolha seu Sexo: ");
	 scanf("%s", &sexo);
	
	sexo= toupper(sexo);
	
   
      switch (sexo) {
		 case 'F': 
		     printf("\nDigite o seu Salário: "); 
	         scanf("%f", &salario);

		 case 'M':
		   	 printf("\nDigite o seu Salário: "); 
	         scanf("%f", &salario);
	    }
	 }
	} while (resposta == 1);
	
	

    // Fazendo o Calculo
	resultado = salario / salarioMin;

	// Exibindo Resultados.

   
	printf("\n=== Exibindo resultados ===\n"); 
	printf("Nome do Individou: %c",nome);
	printf("Sua idade: %i", idade);
	prinft("Seu sexo: %s", sexo); 
	printf("Seu Salário: %f \n", salario);
	printf("Salário Minimo Atual: %f \n", salarioMin);
	printf("Quantos Salário: %f \n", resultado );
	 
	 
	return 0;
}	
