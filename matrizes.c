#include <stdio.h>
#include <locale.h>


int main(){
setlocale(LC_ALL,"");
char aluno[4][200];
float notas[4][3],media[4],soma=0;
int i,j;
 printf("=== Solicitando dados para o usu�rio === \n");
  for(i=0;i<4;i++){
  	printf("Digite o %i� nome do aluno \n",i+1);
  	scanf("%s",&aluno);
 for(j=0;j<4; j++){ printf("digite a %i nota:\n",j+1);
 scanf("%f",&notas[i][j]);
 soma += notas[i][j]; 


 	
 }
  media[i]= soma /3;
 soma=0;
   printf("\n");
               
 }
printf("\n dados do usuario");
for(i=0;i<4;i++){
	printf("%i � aluno: %s \n",i+1,aluno[i]);

 for(j=0;j<4; j++){
printf("%i � nota: %.1f \n",j+1,notas[i][j]);
}
 printf("m�dia : %.1f \n",media[i]);
  printf("\n");
}

}
