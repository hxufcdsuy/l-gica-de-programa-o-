#include <stdio.h>
int main()
 { 
 // variáveis
 
 float primeironumero,segundonumero,soma,subtracao,multiplicacao,divisao;
  
 //dados
 
 printf("digite o primeiro numero:");
scanf("%f",&primeironumero);
 	fflush(stdin);
printf("digite o segundo numero:");
scanf("%f",&segundonumero);

//calculo
 
 soma=primeironumero+segundonumero;
 subtracao=primeironumero-segundonumero;
multiplicacao= primeironumero*segundonumero;
divisao=primeironumero/segundonumero;
//system("cls")//limpa o terminal do windows
//system("clear")//limpa o terminal linux

//system("cls || clear")//limpa o terminal windows e linux


//resultado



printf("=== Exibindo Resultados ===\n");

printf("\no resultado da soma e:%2.f",soma);
printf("\no resultado da subtracao e:%2.f",subtracao);
printf("\n o resultado da multiplicacaoo e:%2.f",multiplicacao);
printf("\n o resultado da divisao e:%2.f",divisao); 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 }
