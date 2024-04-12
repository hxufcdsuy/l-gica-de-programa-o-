#include<stdio.h>
#include<locale.h>
#include<limits.h>
#define TAM 10
int main(){ 
float  numero[TAM];
int positivo,negativo=0,soma=0;
int i;
setlocale(LC_ALL,"");
 for(i=0;i<TAM;i++) {printf("\ndigite o %iº numero:",i+1);
 scanf("%f",&numero[i]);
  
	if(numero[i]<0){
		negativo++;
	} else if (numero[i] > 0) {
		soma += numero[i];
  	}
  }
  	 printf("\n===== exibindo resultados =====\n");
  	 
  	 for(i=0;i<TAM;i++) {
	   printf("%iº número:%.1f \n ",i+1,numero[i]);    
	   }
  	  printf("numero positivo:%i \n",positivo);
  	  printf("numero negativo:%i \n",negativo);
  	  return 0;
 }
 


  
  
  
  
  
  
  
  
  
  

