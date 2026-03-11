Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi

Var

   minuto, resu, soma, adicionar: inteiro
   hora: real


Inicio

      escreval("Digite quantas horas:")
      leia(hora)
      escreval("Digite quantos minutos:")
      leia(minuto)
      escreval("Deseja adicionar quantos minutos ao tempo ?")
      leia(adicionar)

      soma := minuto+adicionar
      se(soma>=60) entao
         hora := hora+(soma/60)
      fimse
      se((soma%60)>0) entao
         minuto := soma%60
      senao
           minuto := 0
      fimse
      escreval(hora:1:0,":",minuto)





fimalgoritmo