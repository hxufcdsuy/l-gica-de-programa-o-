programa {
  funcao inicio() {
    // Declara��o de vari�veis
    real primeiroNumero, segundoNumero
    real soma, subtracao, multiplicacao, divisao

    //solicitando dados para o usu�rio.
    escreva("Digite o primeiro n�mero")
    leia(primeiroNumero)
    escreva("DFigite o segundo n�mero")
    leia(segundoNumero)
    // realizar c�lculos
    soma =  primeiroNumero + segundoNumero
    subtracao = primeiroNumero - segundoNumero
    multiplicacao = primeiroNumero * segundoNumero
    divisao = primeiroNumero / segundoNumero
   

    //exibindo resultados para o usu�rio
    limpa()
      escreva("== Exibindo resultados")
      escreva("\n primeiro n�mero digitado �:",primeiroNumero)
      escreva("\n segubdo n�mero digitado �:",segundoNumero)
      escreva("\n a soma de dois n�meros �:",soma)
      escreva("\n a subtracao de dois n�meros �:",subtracao)
      escreva("\n a multiplica��o de dois n�meros �:",multiplicacao) 
      escreva ("\n a divis�o de dois n�meros �;", divisao)
  }
}
