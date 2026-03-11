Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi

Var
   n1, n2, n3, n4, den, res: real
Inicio

      escreval("DIgite a primera nota:")
      leia(n1)
      escreval("Digite a segunda nota:")
      leia(n2)
      escreval("Digite a terceira nota:")
      leia(n3)
      escreval("Digite a quarta nota:")
      leia(n4)

      se ((n1 = 0) ou (n2 = 0) ou (n3 = 0) ou (n4 = 0)) entao
         escreval("Os números não podem ser zero")
      senao
           den := (1/n1)+(1/n2)+(1/n3)+(1/n4)
           res := 4/den
           escreval("A media harmonica é:",res)
      fimse

fimalgoritmo