Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi

Var

   segundo, minuto, hora, res, dia: real

Inicio

      escreval("Escreva quantas horas desejar transformar:")
      leia(hora)
      
      se (hora<=23) entao
      dia := 0
      senao
      dia := hora/24
      fimse
      minuto := hora*60
      segundo := hora*3600
      
      escreval("Em dias e igual a:", dia)
      escreval("Em horas e igual a:",hora)
      escreval("Em minutos e igual a:",minuto)
      escreval("Em segundos e igual a:", segundo)

fimalgoritmo