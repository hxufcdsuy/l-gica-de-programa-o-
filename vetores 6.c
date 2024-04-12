#include<stdio.h>
#include<locale.h>
#include<limits.h>
#define TAM 5
int main(){ 
char nome [TAM][200];
int idade[TAM];
int i;
setlocale(LC_ALL,"");
 for(i=1;i<TAM;i++) {printf("\ndigite o %iº nome:",i+1);
 scanf("%s",&nome[i]);
 printf("digite sua idade:");
  scanf("%i",&idade[i]);
 }
 fflush(stdin);
 
system("cls || clear");

printf("\n===== exibindo resultados =====\n");
for(i=0;i<TAM;i++){
 printf("%iº nome:%s\n",i+1,nome[i]);
 printf("%iª idade%i\n:",i+1,idade[i]);


}
return 0;













}
