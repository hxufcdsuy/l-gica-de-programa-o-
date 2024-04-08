#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>
#include<limits.h>
#include<string.h>
#include<stdbool.h>
int main(){
setlocale(LC_ALL,"");
//variavel	
char loginsalvo[200]="marta";
char senhasalva[200]="123"; 
char login[200];
char senha[200];
int i;

//dados

for(i=1;i <= 3;i++){
	
 printf("Digite seu login:");	
scanf("%s",&login);
printf("digite sua senha:");
 scanf("%s",&senha);
 fflush(stdin);	

	
	

if( strcmp(login,loginsalvo) != 0 || strcmp(senha,senhasalva) !=0)
 {
 printf("\nlogin ou senha incorreta,\n");
 printf("tentativa %i de 3 \n",i);

sleep(3);
 system(" cls || clear");}
	
 else {
printf("acesso  autorizado.\n");
}
} 
 }


	
	

