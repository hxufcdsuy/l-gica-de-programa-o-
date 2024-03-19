#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	char nome [200];
	float notaum,notadois,notatres, media, soma;	
 	int idade;
	
printf("digite seu nome:");
scanf("%s",&nome);
printf("digite a idade:");
scanf("%i",&idade);
	
	 
printf ("digite a primeira nota:");
scanf("%f",&notaum);

printf("digite a segunda nota:");
scanf("%f",&notadois);
printf("digite a terceira:");
scanf("%f",&notatres);

soma = notaum +notadois+notatres;
media =soma/3	;
	
	printf("=== exibindo resultados=== \n");

    printf("nome: %s \n",nome);
	printf("idade:%i \n",idade);
	printf("média: %.1f \n",media);
	
	if(media >= 7) {
		printf("aluno aprovado");
	}
	else { printf("aluno reprovado");
	}
	
	
	
	
}
