#include<stdio.h>
#include<locale.h>
#include<ctype.h>
int main () {
	setlocale(LC_ALL,"");
	int contador= 0;
	float media=0,soma=0,nota;
	char resposta=0;
	
	do{ printf("digite uma nota:");
	 scanf("%f",&nota);
	fflush(stdin);
	 printf("\nDeseja inserir mais uma nota:");
      scanf("%c",&resposta);
      resposta= toupper(resposta);
	  soma +=nota;
	  contador++;
	} while (resposta == 'S' );
	if(resposta== 'p');
	printf("o número de notas é:%.1i",contador);
	if(resposta== 'N');{
	media = soma/contador;}
	printf("\nmedia:%.1f",media);
}
