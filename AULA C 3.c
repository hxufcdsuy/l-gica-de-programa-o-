#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main (){
	//variavel

	char sexo;
	float altura,pesoideal;
	//dados
	setlocale(LC_ALL,"");


	printf("digite seu sexo M ou F:");
	scanf("%c",&sexo);
    printf("digite a altura:");
    scanf ("%f",&altura);	
	sexo = toupper(sexo);
	//estrutura
	
	
	
	switch(sexo){
	case 'M':
	
	pesoideal=(72.7 * altura) - 58;
	 printf("seu peso ideal é:%.1f",pesoideal);
	 
	break;
	
	case'F':
		
	pesoideal =(62.1 * altura) - 44.7;
	printf("o peso ideal é:%.1f",pesoideal);
	
	break;
	
	default:
		printf("operação invalida");
	
	
	
	}
	
	return 0;
	
	
	
}
