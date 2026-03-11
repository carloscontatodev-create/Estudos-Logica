Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor   : Antonio Carlos Nicolodi 

Var

   vatotal, parcelas, prestacao: real

Inicio

      escreval("Escreva o valor total da compra:")
      leia(vatotal)
      escreval("Escreva a quantidade de parcelas:")
      leia(parcelas)
      
      prestacao := vatotal/parcelas
      
      escreva("O valor da prestação será de:",prestacao)

fimalgoritmo