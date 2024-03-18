#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main () {
	
         setlocale(LC_ALL, ""); //Indentificar o Idioma	
	
	// Declarando Variáveis
	char nome[200];
	int idade;
	float notaUm, notaDois, notaTres, notaQuatro, soma, multi, menos, divi, media;
	
	// Solicitando dados para o Usuário
	
	printf("\nDigite seu Nome: ");
	scanf("%s", &nome);
	
	fflush(stdin);
	
	printf("\nDigite sua Idade: "); 
	scanf("%i", &idade);
	
	printf("\nDigite o 1 Número: "); 
	scanf("%f", &notaUm);
	
	printf("\nDigite o 2 Número: "); 
	scanf("%f", &notaDois);
	


    // Fazendo o Calculo
   soma = notaUm + notaDois;
   multi = notaUm * notaDois;
   divi = notaUm / notaDois;
   menos = notaUm - notaDois;
   media = notaUm + notaDois/4;
   

	// Exibindo Resultados.
        fflush(stdin);
   
	printf("\n=== Exibindo resultados ===\n");
    printf("Nome: %s \n", nome); 
    printf("Soma: %.2f \n", soma);
	printf("Multiplicação: %.2ff \n", multi);
	printf("Subtracao: %.2f \n", menos);
	printf("Divisão: %.2f \n", divi); 
	printf ("Média: %.2f \n", media);
	 
	return 0;
}
