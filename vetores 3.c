#include<stdio.h>

#include<locale.h>
#include<limits.h>
#define TAM 5
int main(){
	setlocale(LC_ALL,"");
 int numeros[TAM],maiornumero=INT_MIN,menornumero=INT_MAX;
 int i;
for(i=0;i<TAM;i++) {  printf(" digite o seu %dº numero:",i+1);
 scanf("%i",&numeros[i]); 
if (numeros[i]>maiornumero){maiornumero=numeros[i];
}
if (numeros[i]<menornumero){ menornumero=numeros[i];
}
}




printf("\n===== exibindo resultados =====\n");
	for(i=0;i<TAM;i++) {  printf("\n%dº numero:%i",i+1,numeros[i]);}
	printf("\nmaior numero:%i",maiornumero);
	 printf("\nmenor numero:%i",menornumero);
	
	return 0 ;
	
	
}

