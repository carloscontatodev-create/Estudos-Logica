Algoritmo "semnome"

Var

   fixo, corrida, soma, distanca: real


Inicio

      escreval("Quantos km deseja percorrer ?")
      leia(distanca)
      escreval("Possuímos um valor fixo de 15 R$, e 1,50 R$ p/km!")

      fixo := 15
      corrida := 1.5
      soma := distanca*corrida+fixo
      
      escreval("O valor a ser gasto sera de:",soma)


Fimalgoritmo