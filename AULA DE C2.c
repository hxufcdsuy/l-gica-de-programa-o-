#include <stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
int main() {
	setlocale(LC_ALL,"");
	//variavel
	char nome[200];
	char conceito;
	float mediaum,mediadois,resultado;

	
     //dados
     printf("digite seu nome:");
     scanf("%s", &nome);
     
	 printf("média 1:");
	 scanf("%f", &mediaum);
	  printf("media 2 :");
	scanf("%f", &mediadois);
	//calculo

	resultado = (mediaum + mediadois) /2.0;
	//estrutura condicional
	if(resultado >= 9 ){
		conceito='A';
	}
	else if( resultado >= 7.5 && resultado< 9) {
		conceito= 'B';
	}
	else if( resultado >  6 && resultado < 7.5){
		
		conceito='C';} 
	else if(resultado >= 4 && resultado < 6){
		
		conceito ='D';
	}
	else  {	conceito= 'E';	} 
	if ( conceito== 'A' || conceito == 'B' || conceito =='C')
	{printf ("aluno aprovado com sucesso:%.2f",resultado);
	}
	else{ printf("aluno reprovado:%.2f",resultado);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
