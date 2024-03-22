#include<stdio.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL,"");
 
 int quantidade ;	
 float precomaca,custototal;	
	printf("digie a quantidade de maças:");

	scanf("%i",&quantidade);
	
     if (quantidade <12) {
     	
     	precomaca = 1.30;
     	
	 } else { precomaca = 1.00;
	 }
     custototal=precomaca * quantidade;
     
	printf("quantidade de maçãs: %i \n",quantidade);
	printf("custo total: R$ %2.f \n",custototal);
	
	
	
	
	
	
	
	
}
