Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi

Var

   n1,n2,n3,media,res:real

Inicio

      escreval("Digite o primeiro número:")
      leia(n1)
      escreval("Digite o segundo número:")
      leia(n2)
      escreval("Digite o terceiro número:")
      leia(n3)
      
      res := n1*n2*n3
      media := raizq(res^1/4)
      
      
      escreval("A média geométrica é igual a:",media)


fimalgoritmo