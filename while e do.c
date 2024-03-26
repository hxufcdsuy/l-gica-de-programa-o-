#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
int main(){
	setlocale(LC_ALL,"");
float soma=0,media,notaum,notadois;  
do{printf("nota um:");
	scanf("%f",&notaum);
	printf("nota dois:");
	scanf("%f",&notadois);
}
while(media <0 || media >10 );

soma = notaum + notadois,
media = soma/2;
 printf("a média:%.1f\n",media);





}
