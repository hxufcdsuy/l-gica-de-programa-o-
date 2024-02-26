programa {
  funcao inicio() {
    inteiro primeironumero,segundonumero,media,produto,soma

  escreva("digite o valor:")
  
  leia(primeironumero)

  escreva("Digite o segundo valor:")

  leia(segundonumero)

soma = (primeironumero + segundonumero)

produto = (primeironumero * segundonumero)

media = (primeironumero + segundonumero)/2

escreva("\no valor da soma é:" , soma)

escreva("\no valor do produto: " , produto)

escreva("\no valor da média:" , media)
 
    
    se(primeironumero > segundonumero) {escreva ("\no valor 1 e maior que 0 valor 2") leia(primeironumero) leia(segundonumero)}

 
 
 senao {escreva("\nvalor 2 é maior que o valor 1") leia (segundonumero) leia (primeironumero)}




  }
}
