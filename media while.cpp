#include <stdio.h>
#include <locale.h>
#include <ctype.h>


   int main() {
         setlocale(LC_ALL, "");
         
         
	  float nota ,soma, media;
	  int contador=0;
      char resposta;
      
      
       do {
       	printf("Digite uma nota: ");
       	scanf("%f", &nota);
       	
       	printf("Deseja inserir mais uma nota: ");
       	scanf("%c", &resposta);
       	resposta = toupper(resposta);
       	
       	soma += nota;
       	contador++;
       	
	   } while (resposta != 'N');
	   
	   media =soma / contador;
	   
	   
	   printf("Média: %.1f \n: ", media);
    
       	
        return 0;
    
		}
