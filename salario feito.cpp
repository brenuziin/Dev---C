#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>

int main () {
	
         setlocale(LC_ALL, ""); //Indentificar o Idioma	
	
	// Declarando Vari�veis
	float salario, resultado, salarioMin = 1412.00;
	char nome[200];
	char sexo;
	int idade;
	
	// Solicitando dados para o Usu�rio
	printf("--Adicionando Pessoas--");
	
	printf("\n\n\nDigite seu nome: ");
	scanf("%s", &nome);
	
    printf ("\nDigite sua Idade: ");
    scanf("%i", &idade);

	printf("\nOp��es de sexo: \n");
	printf ("M - Masculino\n");
	printf("F - Feminino\n");
	printf("Escolha seu Sexo: ");
	scanf("%s", &sexo);
	
	while (nome){
	   printf("aaaaa %s");
	}
	   
	
	sexo= toupper(sexo);
	
	switch (sexo) {
		case 'F': 
		    printf("\nDigite o seu Sal�rio: "); 
	        scanf("%f", &salario);

		case 'M':
			printf("\nDigite o seu Sal�rio: "); 
	        scanf("%f", &salario);
	}

    // Fazendo o Calculo
	resultado = salario / salarioMin;

	// Exibindo Resultados.

   
	printf("\n=== Exibindo resultados ===\n"); 
	printf("Nome do Individou: %c",nome);
	printf("Sua idade: %i", idade);
	prinft("Seu sexo: %s", sexo); 
	printf("Seu Sal�rio: %f \n", salario);
	printf("Sal�rio Minimo Atual: %f \n", salarioMin);
	printf("Quantos Sal�rio: %f \n", resultado );
	 
	 
	return 0;
}	
