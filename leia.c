#include <stdio.h>

int main () {
	// Declarando Variáveis
	char nome[200];
	char sexo;
	int idade;
	float peso;
	
	// Solicitando dados para o Usuário
	
	printf("\nDigite seu Nome: ");
	scanf("%s", &nome);
	
	fflush(stdin);
	
	printf("\nDigite seu Sexo: "); 
	scanf("%c", &sexo);
	
	printf("\nDigite sua Idade: "); 
	scanf("%i", &idade);
	
	printf("\nDigite seu peso: "); 
	scanf("%f", &peso);
	
     
	// Exibindo Resultados.
	
	printf("\n=== Exibindo resultados ===\n");
    printf("Nome: %s \n", nome); 
    printf("Sexo: %c \n", sexo);
    printf("Peso: %f \n", peso);
    printf("Idade: %d \n", idade);
	 
	 
	return 0;
}
