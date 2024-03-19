#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main () {
	
	    setlocale(LC_ALL, ""); //Indentificar o Idioma	
	   
	// Declarando Variáveis
	char nome[200];
	int idade;
	float notaUm, notaDois, notaTres, notaQuatro, media, resultado;
	
	// Solicitando dados para o Usuário
	
	printf("\nDigite seu Nome: ");
	
	//scanf("%s", &nome);
	//gets(nome);
	fgets(nome, 200, stdin);
    
	fflush(stdin);
	
	printf("\nDigite sua Matricula: "); 
	scanf("%i", &idade);
	
	printf("\nNota da Primeira Unidade: "); 
	scanf("%f", &notaUm);
	
	printf("\nNota da Segunda Unidade: "); 
	scanf("%f", &notaDois);
	
	printf("\nNota Terceira Unidade: "); 
	scanf("%f", &notaTres);
	
	printf("\nNota da Quarta Unidade: "); 
	scanf("%f", &notaQuatro);


    // Fazendo o Calculo
   resultado = notaUm + notaDois + notaTres + notaQuatro;
   
   media = (notaUm + notaDois + notaTres + notaQuatro) /4;
   

	// Exibindo Resultados.

	
	printf("\n=== Exibindo resultados ===\n");
    printf("Nome: %s \n", nome); 
    printf("Primeira Unidade: %.2f \n", notaUm);
	printf("Segunda Unidade: %.2f \n", notaDois);
	printf("Terceira Unidade: %.2f \n", notaTres);
	printf("Quarta Unidade: %.2f \n", notaQuatro); 
	printf ("Notas Das Unidades: %.1f \n", resultado);
	printf ("Media: %.2f \n", media);
	
	if (media > 7 && resultado > 24) printf("\n Aluno foi Aprovado!!");
	if (media < 7 )printf ("\n Aluno foi Reprovado!!");
	
	
	return 0;
}
