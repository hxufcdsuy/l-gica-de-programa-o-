#include<locale.h>
#include<stdio.h>
#include<stdlib.h>

int main(){
	//variavel
	setlocale(LC_ALL,"");
	float salario,quantidadedesalario,salariominimo = 1412.00;
	//dados
	printf("digite o sal�rio:");
	
	scanf("%f",&salario);
	

	//calculo
   quantidadedesalario = salario / salariominimo;
	
	system("cls");
	//resultado
	printf("=== exibindo resultados ===\n");
	printf ("\no salario � de:R$ %1.f",quantidadedesalario);

return 0;

     
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	








