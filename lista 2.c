#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
   
   
   int main (){
   	setlocale(LC_ALL,"");
   	int i;
   	printf("\n Tabuada de multiplica��o n�mero 2\n");
   	for(i= 1; i <= 10;i ++){printf("%i x %i = %i \n ",2,i,i*2);
	   }
	   printf("\n Tabuada de multiplica��o do n�mero 3 \n");
	   for (i = 1;i <= 10; i ++) {
	   	printf("%i x %i= %i \n",3,i,i*3);
	   	
	   	
	   	
	   }
   	
   	
   	
   	return 0;
   	
   	
   }
