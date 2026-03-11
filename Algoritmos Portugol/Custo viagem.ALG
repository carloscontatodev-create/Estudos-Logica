Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi

Var

   gasolina, combustivel, preco, litro, distancia, valor: real

Inicio

      escreval("Qual a distância da viagem ?")
      leia(distancia)
      escreval("Quanto o veículo gasta por km rodado ?")
      leia(litro)
      escreval("Qual o valor do combustivel p/L ?")
      leia(combustivel)

      preco := distancia/litro
      valor := preco*combustivel
      
      escreval("O custo total da viagem será de:",valor)
      



fimalgoritmo