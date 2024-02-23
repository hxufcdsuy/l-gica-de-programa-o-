programa {
  funcao inicio() { 
    //declaração de variáveis
    real idade
    cadeia nome 
    real media,notasdoaluno1,notasdoaluno2,notasdoaluno3,notasdoaluno4
    //mostra de dados
    escreva("\nqual o nome do aluno:")
    leia(nome)
    escreva("\nqual a idade do aluno:")
    leia(idade)
    escreva("\nqual a nota do aluno 1:")
    leia(notasdoaluno1)
    escreva("\nqual a nota do aluno 2 ;")
    leia(notasdoaluno2)
    escreva("\nqual a nota do aluno 3:")
    leia(notasdoaluno3)
    escreva ("\nqual a nota do aluno 4:")
    leia (notasdoaluno4)
    //calculando a media do aluno
    media = (notasdoaluno1 + notasdoaluno2 + notasdoaluno3 + notasdoaluno4)/4 
   
    
    //resultado da media
    escreva ("\nA media:", nome , " é " , media)

    
  }
}
