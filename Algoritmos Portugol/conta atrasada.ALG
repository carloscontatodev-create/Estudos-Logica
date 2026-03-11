Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi

Var

   multa, taxa, juros, valor, atraso, final, tolerancia: real

Inicio
      escreval("Qual valor da prestação ?")
      leia(valor)
      escreval("Quantos dias se passaram desde o vencimento ?")
      leia(tolerancia)
      
      se (tolerancia>=20) entao
      multa := 500
      taxa := (valor/100*5)+valor
      final := multa+taxa

      escreval("O valor que deverá ser pago é:",final)
      
      senao

           escreval("O valor que deverá ser pago é:",valor)
           fimse

fimalgoritmo