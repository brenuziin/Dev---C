#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main () {
	
         setlocale(LC_ALL, ""); //Indentificar o Idioma	
	
	// Declarando Vari�veis
	char nome[200];
	int idade;
	float notaUm, notaDois, notaTres, notaQuatro, soma, multi, menos, divi, media;
	
	// Solicitando dados para o Usu�rio
	
	printf("\nDigite seu Nome: ");
	scanf("%s", &nome);
	
	fflush(stdin);
	
	printf("\nDigite sua Idade: "); 
	scanf("%i", &idade);
	
	printf("\nDigite o 1 N�mero: "); 
	scanf("%f", &notaUm);
	
	printf("\nDigite o 2 N�mero: "); 
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
	printf("Multiplica��o: %.2ff \n", multi);
	printf("Subtracao: %.2f \n", menos);
	printf("Divis�o: %.2f \n", divi); 
	printf ("M�dia: %.2f \n", media);
	 
	return 0;
}
