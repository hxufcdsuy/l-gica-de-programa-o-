#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL,"");
float media=0;
int soma=0,numero;




do{
	
	
	printf(" numero:");
	scanf("%i",&numero);
	if(numero > 0){
	
	soma += numero;
	
	media= soma/numero;
}
	
	
} 
while(numero > 0); {

printf(" == exibindo resultado == \n");
printf("média:%.1f \n",media);
printf("soma:%i \n",soma);


}
return 0 ;



}

	
	

	

	
	
	
	

	
	
	
	
	
	
	
	
	
	
	

