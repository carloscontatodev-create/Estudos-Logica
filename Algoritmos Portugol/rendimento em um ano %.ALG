Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor   : Antonio Carlos Nicolodi 

Var

   taxa, rendimento, deposito: real

Inicio

      escreva("Digite o valor do deposito:")
      leia(deposito)
      escreva("Digite o valor da taxa a.n:")
      leia(taxa)
      
      rendimento := (deposito/100)*taxa+deposito
      
      escreva("Em um ano você terá de rendimento um total de:",rendimento)

fimalgoritmo