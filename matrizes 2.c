#include <stdio.h>
#include <locale.h>


int main(){
setlocale(LC_ALL,"");
char disciplina[3][200];
float notas[3][2],media[2],soma=0;
int i,j;
 printf("=== Solicitando dados para o usu�rio === \n");
  for(i=0;i<3;i++){
  	printf("Digite o %i� nome da materia \n",i+1);
  	scanf("%s",&disciplina);
 for(j=0;j<2; j++){ printf("digite a %i nota:\n",j+1);
 scanf("%f",&notas[i][j]);
 soma += notas[i][j]; 


 	
 }
  media[i]= soma /2;
 soma=0;
   printf("\n");
               
 }
printf("\n dados do usuario");
for(i=0;i<3;i++){
	printf("%i � mat�ria: %s \n",i+1,disciplina[i]);

 for(j=0;j<2; j++){
printf("%i � nota: %.1f \n",j+1,notas[i][j]);
}
 printf("m�dia : %.1f \n",media[i]);
  printf("\n");
}

}
