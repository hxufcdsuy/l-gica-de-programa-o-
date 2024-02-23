programa {
  funcao inicio() {
    // Declaração de variáveis
    real primeiroNumero, segundoNumero
    real soma, subtracao, multiplicacao, divisao

    //solicitando dados para o usuário.
    escreva("Digite o primeiro número")
    leia(primeiroNumero)
    escreva("DFigite o segundo número")
    leia(segundoNumero)
    // realizar cálculos
    soma =  primeiroNumero + segundoNumero
    subtracao = primeiroNumero - segundoNumero
    multiplicacao = primeiroNumero * segundoNumero
    divisao = primeiroNumero / segundoNumero
   

    //exibindo resultados para o usuário
    limpa()
      escreva("== Exibindo resultados")
      escreva("\n primeiro número digitado é:",primeiroNumero)
      escreva("\n segubdo número digitado é:",segundoNumero)
      escreva("\n a soma de dois números é:",soma)
      escreva("\n a subtracao de dois números é:",subtracao)
      escreva("\n a multiplicação de dois números é:",multiplicacao) 
      escreva ("\n a divisão de dois números é;", divisao)
  }
}
