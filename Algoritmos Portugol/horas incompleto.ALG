Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor   : Antonio Carlos Nicolodi 

Var

   hora, minuto, resu, soma, one: inteiro


Inicio

      escreval("Digite quantas horas:")
      leia(hora)
      escreval("Digite quantos minutos:")
      leia(minuto)
      escreval("Deseja adicionar quantos minutos ao tempo ?")
      leia(soma)
      one := 1
      
      
      se (minuto>=60) entao
      hora := one
      
      senao
      
      minuto := minuto+soma

      fimse


      se (hora<=1) entao
      
      escreval("O novo tem será de",hora," hora e",minuto," minutos")
      
      senao

      escreval("O novo tem será de",hora," horas e",minuto," minutos")
      
      fimse


fimalgoritmo