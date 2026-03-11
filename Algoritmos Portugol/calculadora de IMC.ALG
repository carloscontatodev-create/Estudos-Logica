Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi

Var

   peso, altura, imc: real

Inicio

      escreval("Digite o seu peso em kg:")
      leia(peso)
      escreval("Digite a sua altura em cm:")
      leia(altura)
      
      imc := (peso*10000)/(altura^2)
      
      escreval("O seu IMC e igual a:",imc)


fimalgoritmo