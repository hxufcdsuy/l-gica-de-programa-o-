#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#define TAM 4

int main(){
    setlocale(LC_ALL,"");
    float notas[TAM], resultado=0, soma=0;
    char nome [200];
    int divisor=0;
    int i;

    for(i=0;i < TAM;i++){
        printf("digite a sua %iª nota: ",i+1);
        scanf("%f",&notas[i]);

        divisor++;
        soma+=notas[i];

        resultado= (float)soma /divisor;
    }

    printf(" === Exibindo resultados === \n");
    for(i=0;i< TAM; i++){
        printf(" %iª nota: %.1f \n",i+1,notas[i]);
    }

    if(resultado >= 7){
        printf("situação: aprovado \n");
    } else if(resultado >= 5 && resultado <= 6.9){
        printf("situação: recuperação \n");
    } else {
        printf("situação: reprovado\n");
    }

    return 0;
}
