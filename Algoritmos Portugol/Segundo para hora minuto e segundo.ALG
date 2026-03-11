Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi

Var

   segundo, minuto, hora, res: real

Inicio

      escreval("Digite uma quantidade de segundos que você deseja:")
      leia(segundo)
      
      minuto := segundo/60
      hora := segundo/3600
      escreval("Em hora e igual a:",hora)
      escreval("Em minutos e igual a:", minuto)
      escreval("Em segundo e igual a:",segundo)

fimalgoritmo