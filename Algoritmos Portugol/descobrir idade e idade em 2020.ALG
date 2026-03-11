Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor   : Antonio Carlos Nicolodi 

Var

   nascimento, atual, dois, idade, vinte1, vinte2: inteiro



Inicio

      escreval("Digite seu ano de nascimento:")
      leia(nascimento)
      escreval("Digite o ano atual:")
      leia(atual)
      
      idade := atual-nascimento
      dois := 2020

      escreval("Essa pessoa tem", idade , " anos")

      
      se (atual>=2021) entao

      vinte1 := atual-dois
      escreval("No ano de 2020 essa pessoa tera exatamento", vinte1 , " anos")


      senao

      vinte2 :=  dois-nascimento
      escreval("No ano de 2020 essa pessoa tera exatamento", vinte2 , " anos")



      fimse





fimalgoritmo