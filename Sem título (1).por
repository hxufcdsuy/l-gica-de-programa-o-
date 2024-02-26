programa {
  funcao inicio() {//variaveis
  cadeia nome
  real media
  real nota1,nota2,nota3
  inteiro idade
  
  //dados
    escreva ("digite seu nome:")

    leia(nome)
    escreva("digite sua idade:")

    leia(idade)
    escreva("qual o valor da nota 1:")

    leia(nota1)
    escreva("qual o valor da nota 2:")

    leia(nota2)
    escreva("qual o valor da nota 3:")

    leia(nota3)
//resultado
    
      escreva ("Cálculo de media")

        media = (nota1 + nota2 + nota3)/3
        
          escreva("  A média do aluno é:", media)
  se (media >=7 ) {escreva("aluno aprovado")}
  senao{escreva("aluno reprovado")}    
  }
}
