Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi

Var

   preco, desconto, total,desconto2: real

Inicio

      escreval("Digite o valor do produto")
      leia(preco)
      escreval("Digite o valor do desconto")
      leia(desconto)
      
      total := preco-(preco/100*desconto)
      desconto2 := abs(total-preco)
      escreval("O valor do desconto foi de:",desconto2)
      escreval("O valor do produto pós desconto é de:",total)

fimalgoritmo